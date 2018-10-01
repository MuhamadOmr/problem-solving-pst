#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

    vector<int> days;
    int day = 0;
    int numOfDays = 0;
    scanf("%i", &numOfDays);

    int beforeLastDayIndex = numOfDays - 2;

    for (int i = 0; i < numOfDays; ++i)
    {

        scanf("%i", &day);
        if (numOfDays == 1)
        {
            if (day == 15)
            {
                cout << "DOWN" << endl;
                return 0;
            }
            if (day == 0)
            {
                cout << "UP" << endl;
                return 0;
            }
            cout << -1 << endl;
            return 0;
        }

        if ((i == numOfDays - 1 && day > days.back()))
        {
            if (day == 15)
            {
                cout << "DOWN" << endl;
            }
            else
            {
                cout << "UP" << endl;
            }
        }
        if ((i == numOfDays - 1 && day < days.back()))
        {
            if (day == 0)
            {
                cout << "UP" << endl;
            }
            else
            {
                cout << "DOWN" << endl;
            }
        }

        days.push_back(day);
    }
    return 0;
}
