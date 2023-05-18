// check if strings are anagrams of each other
#include <iostream>
#include <cstring>
using namespace std;

bool anagram(string s1, string s2)
{
    int count[256] = {0};
    /* in anagram of string, simple approach is we make array of integers int arr[256] where 256 are total number of characters
        then traverse one of the string and increase corresponding character's decimal value in array
        then again traverse second string and decrement corresponding characters decimal value in array
        if all the values in array are zero then strings are anagrams, otherwise not*/
    if (s1.length() != s2.length())
    {
        return false;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        count[s2[i]]--;
    }

    bool bRet = true;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            bRet = false;
            break;
        }
    }
    return bRet;
}

int main()
{
    string s1 = "geeksForgeeks";
    string s2 = "Forgeeksgeesk";
    bool bRet = anagram(s1, s2);
    cout << bRet << endl;
    return 0;
}