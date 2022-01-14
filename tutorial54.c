#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //case 1: de allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 43;
    ptr[1] = 44;
    ptr[3] = 56;
    ptr[4] = 57;
    free(ptr); //ptr is now a dangling pointer

    // case 2: funcion returning local variable address
    return 0;
}
