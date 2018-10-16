#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // initialize 26 array of characters each is zero
    int charCount[26] = {0};
    int k;
    string resultString;
    string inputString;
    scanf("%i", &k);
    cin >> inputString;
    string result;
    // get each character decimal to be count of repeated
    for (size_t i = 0; i < inputString.length(); ++i)
    {
        charCount[inputString[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; ++i)
    {
        // validate count
        if (charCount[i] % k)
        {
            cout << -1 << endl;
            return 0;
        }
        if (charCount[i] != 0)
        {

            result.append(charCount[i] / k, char(i + 97));
        }
        }

    while (k--)
    {
        cout << result;
    }
    cout << endl;
    return 0;
}
