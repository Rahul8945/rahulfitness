#include <stdio.h>
int main()
{
    int num, index=0;
    printf("enter a number\n"); 
    scanf("%d",&num);

    do
    {
        printf("%d\n", index+0);
        index = index + 1;
    } while (index<num);
    
    return 0;
}
