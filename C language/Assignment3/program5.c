/*
accept character from user and check whether it's vowel or not
 */
#include <stdio.h>
#include <stdbool.h>
bool chkVowel(char cValue)
{
    if (cValue == 'a' ||
        cValue == 'e' ||
        cValue == 'i' ||
        cValue == 'o' ||
        cValue == 'u' ||
        cValue == 'A' ||
        cValue == 'E' ||
        cValue == 'I' ||
        cValue == 'O' ||
        cValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    char cValue = '\0';
    bool bRet = false;
    printf("enter character\n");
    scanf("%c", &cValue);
    bRet = chkVowel(cValue);
    if (bRet == true)
    {
        printf("%c is a vowel\n",cValue);
    }
    else
    {
        printf("%c is not a vowel\n",cValue);
    }
    return 0;
}