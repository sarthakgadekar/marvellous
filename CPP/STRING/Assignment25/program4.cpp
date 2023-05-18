#include <iostream>
using namespace std;
int lastOccurence(char *str, char ch)
{
   char *temp=str; 
   int index=0;
    while (*temp != '\0')
    {
        temp++;
        index++;
    }
    temp--;
    index--;
    while(temp>=str && index != -1)
    {
        if(*temp==ch)
        {
            break;
        }
        temp--;
        index--;
    }
    if(index==-1)
    {
        return -1;
    }
    else
    {
        return index;
    }
    
}
int main()
{
    char Arr[30], ch;
    cout << "enter string : ";
    cin.getline(Arr, 30);
    cout << "enter a character" << endl;
    cin >> ch;
    int iRet = lastOccurence(Arr, ch);
    cout << iRet;
    return 0;
}