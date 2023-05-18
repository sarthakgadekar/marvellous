int printf(const char* format,...);

//if u don't declare above function,you will get warning
/*  In function 'main':
helloworld.c:3:5: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    3 |     printf("hello world");
      |     ^~~~~~
helloworld.c:3:5: warning: incompatible implicit declaration of built-in function 'printf'
helloworld.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h> */
int main()
{
    printf("hello world");
    return 0;
}