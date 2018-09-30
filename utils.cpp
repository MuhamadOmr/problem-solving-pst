#include <string>
#include <cmath>
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