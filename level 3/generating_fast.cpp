#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
        N number of string to follow
        M Lines of strings 
        L length of each string <= 10

        * case senstive - no repetition
*/

int main()
{
    string sentence;
    int numOfLines = 0;

    scanf("%d", &numOfLines);

    while (numOfLines--)
    {
        cin >> sentence;

        sort(sentence.begin(), sentence.end());
        do
        {
            cout << sentence << '\n';
        } while (next_permutation(sentence.begin(), sentence.end()));

        cout << '\n';
    }

    return 0;
}
