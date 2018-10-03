#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <iostream>

using namespace std;

bool isPerfectSquare(double x)
{
    float sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

// put an array as a c++ argument ,  use foreach
void forEachLoop(int (&charCount)[26], int k)
{
    for (int &c : charCount)
    {
        float repeated = c / k;
        if (c % k)
        {

            return;
        }
    }
}

// loop string to get each character
void loopString()
{
    string inputString;
    int charCount[26];
    // get each character decimal to be count of repeated
    for (size_t i = 0; i < inputString.length(); ++i)
    {
        charCount[inputString[i] - 'a'] += 1;
    }
}

// loop vector
void loopVector()
{
    vector<int> days;
    for (auto i = days.begin(); i != days.end(); ++i)
        cout << *i << ' ';
}

// loop array
void loopArray()
{
    array<int, 5> v;
    for (std::size_t i = 0; i != v.size(); ++i)
    {
        // access element as v[i]

        // any code including continue, break, return
    }
}
