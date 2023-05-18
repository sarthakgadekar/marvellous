// find the leftmost character's index that repeats in a string.

#include <iostream>
#include<climits>
using namespace std;

int findFirstRepeating(string str)
{
    int res = INT_MAX;
    int FI[256];
    for(int i=0;i<256;i++)
    {
        FI[i]=-1;
    }
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (FI[str[i]] == -1)
        {
            FI[str[i]] = i;
        }
        else
            res = i;
    }
    return (res == INT_MAX) ? -1 : res;
}
int main()
{
    string str = "abcdefghijkli";
    long long iRet=findFirstRepeating(str);
    cout<<iRet<<endl;
    return 0;
}