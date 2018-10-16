#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // in this problem the is to get the right interval of steps
    // so it can if the tiger going up will be possible to be numOfOdd - numOfEven == 0 OR numOfOdd - numOfEven = 1
    // if the tiger going down will be possible to be numOfOdd - numOfEven == 0 OR numOfOEven - numOfOdd = 1

    int numOfEven, numOfOdd = 0;

    scanf("%i%i", &numOfEven, &numOfOdd);

    if (abs(numOfOdd - numOfEven) == 1 || (numOfOdd - numOfEven == 0 && numOfEven != 0 && numOfOdd != 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}