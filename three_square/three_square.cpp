#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number;

    while (scanf("%f", &number))
    {
        int first, second, third;

        third = sqrt(number);
        number -= third * third;

        second = sqrt(number);
        number -= second * second;

        first = sqrt(number);
        number -= first * first;

        if (number == 0)
        {
            printf("%i %i %i\n", first, second, third);
        }
        else
        {

            cout << -1 << endl;
        }
    }
    return 0;
}
