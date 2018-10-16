#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first, second;

    for (int i; i <= 201; ++i)
    {
        int numerOfSqures = 0;
        scanf("%i%i", &first, &second);
        if (first == 0 && second == 0)
            break;

        for (first; first <= second; ++first)
        {
            int square = sqrt(first);
            if (pow(square, 2) == first)
            {
                ++numerOfSqures;
            }
        }
        printf("%d\n", numerOfSqures);
    }
    return 0;
}
