#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <stdlib.h>

using namespace std;

int main()
{

    array<int, 4> numbers = {0};
    string inputString;
    cin >> inputString;
    vector<int> resultNums;

    for (size_t i = 0; i < inputString.length(); ++i)
    {
        if (inputString[i] != '+')
        {
            numbers[atoi(&inputString[i])] += 1;
        }
    }

    for (size_t i = 1; i < numbers.size(); ++i)
    {

        while (numbers[i]--)
        {
            resultNums.push_back(i);
        }
    }

    for (auto n = resultNums.begin(); n != resultNums.end(); ++n)
    {
        int index = distance(resultNums.end(), n);

        if (index == -1)
        {
            cout << *n;
        }
        else
        {
            cout << *n << '+';
        }
    }
    cout << endl;
    return 0;
}
