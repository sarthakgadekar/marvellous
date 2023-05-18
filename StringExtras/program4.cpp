/*
    Closest Strings

    Given a list of words followed by two words, the task to find the minimum
    distance between the given two words in the list of words.

    Input:
        S = { "the", "quick", "brown", "fox", "quick"}
        word1 = "the"
        word2 = "fox"
        Output: 3
        Explanation: Minimum distance between the words "the" and "fox" is 3
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int distance_between_words(string &S, string *w1, string *w2)
{
    auto it = find(S.begin(), S.end(), w1);
    int posOfw1 = 0;
    int posOfw2 = 0;
    if (it != S.end())
    {
        posOfw1 = it - 0;
    }
    else
    {
        cout << "not found";
    }
    auto it2 = find(S.begin(), S.end(), w2);
    if (it2 != S.end())
    {
        posOfw2 = it2 - 0;
    }
    return posOfw2 - posOfw1;
}
int main()
{
    string S = { "the", "quick", "brown", "fox", "quick", "sarthak", "dhanraj", "rohan", "pooja" };
    string word1 = "brown";
    string word2 = "rohan";
    int iRet = distance_between_words(S, word1, word2);
    cout << "distance is " << iRet;
    return 0;
}