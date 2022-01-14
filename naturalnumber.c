#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("enter the last natural number you want sum of\n");
    scanf("%d",&n);


    sum = (n*n+n)/2;
    printf("sum of first %d natural number is : %d\n",n,sum);
    return 0;
}
