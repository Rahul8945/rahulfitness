#include <stdio.h>

int func1(int b)
{
    return b * 10;
}
int main()
{
    int b = 344;

    int val = func1(b);
    int *ptr = &val;

    printf("the value of func1 is %d", val);
    return 0;
}
