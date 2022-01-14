#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf(" the value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}
 