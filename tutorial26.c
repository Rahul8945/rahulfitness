#include <stdio.h>

int main()
{

    printf("lets learn about pointer\n");
    int a= 45;
    int* ptra = &a;
    printf ("the address of pointer to a is %p\n", &ptra);
    printf("the value of a is %p\n",*ptra);
    return 0;
}