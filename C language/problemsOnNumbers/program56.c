
#include "Header56.h"
int main()
{
    auto int iBase = 0, iPower = 0;
    printf("enter base\n");
    scanf("%d", &iBase);
    printf("enter power\n");
    scanf("%d", &iPower);
    auto ULONG iRet = Power(iBase, iPower);
    printf("%d", iRet);

    return 0;
}