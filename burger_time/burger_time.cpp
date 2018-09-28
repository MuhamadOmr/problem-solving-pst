#include <iostream>
#include <cmath>

using namespace std;

const int OO = 0x3f3f3f3f;

int main()
{
    int roadLength;

    // not zero indexed
    while (scanf("%i", &roadLength))
    {
        char roadString[roadLength];
        if (roadLength == 0)
            break;

        scanf("%s", roadString);
        int lastNearestLength = roadLength;
        int drugIndex = -OO;
        int resturantIndex = -OO;

        for (int i = 0; i < roadLength; ++i)
        {
            if (roadString[i] == 'Z')
            {
                lastNearestLength = 0;
                break;
            }

            if (roadString[i] == 'R')
            {
                resturantIndex = i;
                if ((resturantIndex - drugIndex) < lastNearestLength)
                {
                    lastNearestLength = i - drugIndex;
                }
            }
            if (roadString[i] == 'D')
            {
                drugIndex = i;
                if ((drugIndex - resturantIndex) < lastNearestLength)
                {
                    lastNearestLength = i - resturantIndex;
                }
            }
        }
        printf("%i\n", lastNearestLength);
    }
    return 0;
}
