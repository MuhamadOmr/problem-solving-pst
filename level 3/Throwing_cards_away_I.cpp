#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue> // std::queue

using namespace std;

/*

        N num of cards 1 indexed values sorted from 1 to n .. 1 is the top n is the bottom

        when length of N == 2  , remove the top cards and put the new top to the bottom using queue 

        output two lines 
             line of sequence discarded cards 
             line of the remaining card 
*/

int main()
{
    int numberOfCards = 0;

    while (scanf("%d", &numberOfCards))
    {
        if (numberOfCards == 0)
            return 0;
        vector<int> discarded;
        int remaining = 0;
        queue<int> cardsQue;

        // create a queue
        for (int i = 1; i <= numberOfCards; ++i)
        {
            cardsQue.push(i);
        }

        while (!cardsQue.empty())
        {
            if (cardsQue.size() == 1)
            {
                remaining = cardsQue.front();
                cardsQue.pop();
                break;
            }
            // add to discarded
            int disF = cardsQue.front();
            discarded.push_back(disF);

            // remove the top
            cardsQue.pop();

            // added the new top to the bottom then remove it too
            int f = cardsQue.front();
            cardsQue.push(f);
            cardsQue.pop();
        }

        cout << "Discarded cards: ";

        auto it = discarded.begin();

        if (it != discarded.end())
        {
            cout << *it;
            ++it;
        }

        for (; it != discarded.end(); ++it)
        {
            cout << ", " << *it;
        }

        cout << endl
             << "Remaining card: " << remaining << endl;
    }
    return 0;
}