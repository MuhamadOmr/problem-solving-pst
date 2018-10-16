#include <iostream>
#include <cmath>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    /*
        raw string length can be from 0 : 80
    */
    int numOfLinesCases = 0;
    scanf("%d", &numOfLinesCases);
    string rawString;

    for (int i = 0; i < numOfLinesCases; ++i)
    {
        cin >> rawString;
        int numOfMinPeriod = rawString.length();

        // here we loop through period to be from 1 to the length of the string / 2 , so repetition will not be less than 2
        // make period array
        for (int period = 1; period <= rawString.length() / 2; ++period)
        {
            string periodStr = rawString.substr(0, period);

            int cou = 0;
            signed int foundIndex = 0;
            // check if the period string repeated till the end of the rawstring
            // find number of occurences in a string
            while (foundIndex != string::npos)
            {

                foundIndex = rawString.find(periodStr, foundIndex);

                if (foundIndex != string::npos)
                {
                    foundIndex += periodStr.length();
                    cou++;
                }
            }

            // of the number of ocurrences cover all the rawString meaning if length of string occurence equal the rawstring
            if (cou * periodStr.length() == rawString.length())
            {
                numOfMinPeriod = periodStr.length();
                break;
            }
        }

        // this to fix a presentaion error  only 
        if (i == numOfLinesCases - 1)
            printf("%d\n", numOfMinPeriod);
        else
            printf("%d\n\n", numOfMinPeriod);

    }
    return 0;
}
