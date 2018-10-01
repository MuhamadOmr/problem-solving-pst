#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string inputString;
    cin >> inputString;
    int numOfDiff = 0;

    int usedLength = (inputString.length() % 2) ? (inputString.length() + 1) / 2 : inputString.length() / 2;

 //      cout << usedLength << endl;
    for (size_t i = 0; i < usedLength; ++i)
    {

        if (inputString[i] != inputString[inputString.length() - 1 - i])
        {
            ++numOfDiff;
        }

 //              cout << inputString[inputString.length() - 1 - i] << '\t' << inputString[i] << '\t' << numOfDiff << '\t' << endl;
    }

    if (numOfDiff == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (numOfDiff == 0 && !(inputString.length() % 2))
    {
        cout << "NO" << endl;
        return 0;
    }
    else if (numOfDiff == 0 && inputString.length() % 2)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}
