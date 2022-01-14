#include <stdio.h>
#include "tutorial54.c"
#define PI 3.14
#define square (r) r*r
int main(int argc, char const *argv[])
{
    float var =PI;
    int r = 4;
    int * ptr = functiondangling();
    printf("this is  pi %f\n",var);
    printf("the area of this circle is %f\n", PI * SQUARE(r));
    return 0;
}
