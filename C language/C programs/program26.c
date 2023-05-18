#include<stdio.h>
void displayClass(float fMarks)
{
    if(fMarks<35  && fMarks>=0)
    {
        printf("fail\n");
    }
    else if(fMarks>=35 && fMarks<=50)
    {
        printf("pass\n");
    }
    else if(fMarks>50 && fMarks<=60)
    {
        printf("second  class\n");
    }
    else if(fMarks>60 && fMarks<=70)
    {
        printf("first class\n");
    }
    else if(fMarks>70 && fMarks<=100)
    {
        printf("first class with distinction\n");
    }
    else
    {
        printf("invalid percentage\n");
    }
}
int main()
{
    float fValue=0.0;
    printf("enter percentage\n");
    scanf("%f",&fValue);
    displayClass(fValue);
    return 0;
}