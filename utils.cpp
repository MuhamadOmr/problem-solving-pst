#include <string>
#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>
#include <array>
#include <iostream>

using namespace std;

bool isPerfectSquare(double x)
{
    float sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

// put an array as a c++ argument ,  use foreach
void forEachLoop(int (&charCount)[26], int k)
{
    for (int &c : charCount)
    {
        float repeated = c / k;
        if (c % k)
        {

            return;
        }
    }
}

// loop string to get each character
void loopString()
{
    string inputString;
    int charCount[26];
    // get each character decimal to be count of repeated
    for (size_t i = 0; i < inputString.length(); ++i)
    {
        charCount[inputString[i] - 'a'] += 1;
    }
}

// loop vector
void loopVector()
{
    vector<int> days;
    for (auto i = days.begin(); i != days.end(); ++i)
        cout << *i << ' ';
}

// loop array
void loopArray()
{
    array<int, 5> v;
    for (std::size_t i = 0; i != v.size(); ++i)
    {
        // access element as v[i]

        // any code including continue, break, return
    }
}

void defineAndUseArrayOfChars()
{
    char roadString[5];

    scanf("%s", roadString);
}

// read empty lines empty string read array of chars => used in parenthesee balance problem
void readEmptyLinesInCharsArray()
{

    char rawChars[129];
    int numOfLines = 0;
    scanf("%d", &numOfLines);
    // https://stackoverflow.com/questions/25597732/read-empty-lines-c
    // you have to read it twice
    cin.getline(rawChars, 129); // reads the rest of the line that the number was on
    cin.getline(rawChars, 129); // reads the blank line
}

// multiple way to seperate any iterators

//example : 1, 2, 3, 4, 5
void sepAnyIterator()
{

    // way 1
    vector<int> discarded;
    auto it = discarded.begin();

    if (it != discarded.end())
    {
        std::cout << *it;
        ++it;
    }

    for (; it != discarded.end(); ++it)
    {
        cout << ", " << *it;
    }

    // way 2
    array<int, 3> data = {1, 2, 3};
    ostream_iterator<int> out(cout, ", ");
    copy(data.begin(), data.end(), out);
    cout << '\n';
}

// return actual string length from array of char or a string
void StrLen(value)
{
    strlen(value);
}

// this finds all possible sorting of string  in algoritm lib
void allPossibleSotring()
{
    next_permutation(sentence.begin(), sentence.end());
}

// find number of occurence to in a string
void findNumOfOccurencesInString()
{
    string rawString;
    string periodStr = "findme";
    int cou = 0;
    signed int foundIndex = 0;
    // check if the period string repeated till the end of the rawstring

    // find number of occurences in a string
    while (foundIndex != string::npos)
    {

        foundIndex = rawString.find(periodStr, foundIndex);

        if (foundIndex != string::npos)
        {
            foundIndex += periodStr.length();
            cou++;
        }
    }
}