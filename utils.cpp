#include <cmath>
bool isPerfectSquare(double x)
{
    float sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
