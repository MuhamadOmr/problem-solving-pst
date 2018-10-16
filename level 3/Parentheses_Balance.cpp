#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <string.h>

using namespace std;

/*
        N number of string to follow
        M Lines of strings 
        L length of each string <= 10

        * case senstive - no repetition
*/

int main()
{
    int numOfLines = 0;
    scanf("%d", &numOfLines);
    char rawChars[140];
    cin.getline(rawChars, 140);
    while (numOfLines--)
    {

        stack<char> charStack;

        cin.getline(rawChars, 140);
        if (strlen(rawChars) == 0)
        {
            cout << "Yes" << '\n';
            continue;
        }

        for (int i = 0; i < strlen(rawChars); ++i)
        {

            if (!charStack.empty() && charStack.top() == '[' && rawChars[i] == ']')
            {
                charStack.pop();
                continue;
            }

            if (!charStack.empty() && charStack.top() == '(' && rawChars[i] == ')')
            {

                charStack.pop();
                continue;
            }
            if (!isblank(rawChars[i]))
            {
                charStack.push(rawChars[i]);
            }
        }

        if (!charStack.empty() && !isblank(charStack.top()))
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "Yes" << '\n';
        }
    }

    return 0;
}
