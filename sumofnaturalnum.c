#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  n,sum = 0;
    printf("enter the last natural number you want the sum of\n");
    scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum +=i;
    // }
    sum = (n*n+n)/2;
    printf("sum of first %d natural number is : %d\n",n,sum);
    return 0;
}
