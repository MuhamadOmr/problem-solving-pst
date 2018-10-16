#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

    vector<int> soldiers;
    int smallestSoldierIndex = 0;
    int highestSoldierIndex = 0;
    int numOfSoldiers = 0;
    int soldier = 0;
    int numberOfSteps = 0;

    scanf("%i", &numOfSoldiers);

    for (int i = 0; i < numOfSoldiers; ++i)
    {
        scanf("%i", &soldier);
        if (i == 0)
        {
            soldiers.push_back(soldier);
            continue;
        }

        if (soldier > soldiers[highestSoldierIndex])
        {

            highestSoldierIndex = i;
        }

        if (soldier <= soldiers[smallestSoldierIndex])
        {
            smallestSoldierIndex = i;
        }

        soldiers.push_back(soldier);
    }

    if (soldiers.back() == soldiers[smallestSoldierIndex] && soldiers.front() == soldiers[highestSoldierIndex])
    {
        cout << 0 << endl;
        return 0;
    }

    numberOfSteps += highestSoldierIndex;
    numberOfSteps += (int)soldiers.size() - 1 - smallestSoldierIndex;

//    cout << "hieghse : " << highestSoldierIndex << "smallers : "<< smallestSoldierIndex;
    if (highestSoldierIndex > smallestSoldierIndex)
    {
        numberOfSteps -= 1;
    }
    cout << numberOfSteps << endl;
    return 0;
}
