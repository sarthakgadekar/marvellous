#include <stdio.h>
void jwellerShop(int iGram)
{
    switch(iGram)

    {
    case 1:
        printf("your bill amount is 4000\n");
        break;
    case 2:
        printf("your bill amount is 8000\n");
        break;
    case 3:
        printf("your bill amount is 20000\n");
        break;
    case 4:
        printf("your bill amount is 40000\n");
        break;
    default:
        printf("invalid grams\n");
    }
}
int main()
{
    int iValue = 0;
    printf("1. 1 gram coin\n");
    printf("2. 2 gram coin\n");
    printf("3. 5 gram coin\n");
    printf("4. 10 gram coin\n");
    printf("\nenter your choice you want to purchase\n");
    
    scanf("%d", &iValue);
    jwellerShop(iValue);

    return 0;
}