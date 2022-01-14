#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void main()
{
    int r = 10, v = 20;
    //  call by value
    swap(r, v);
    printf("\nvalue of r: %d", r);
    printf("\nvalue of r: %d", v);

    // void swap ( int *x, int *y)
    // {
    // int temp;
    // temp = *x;
    // *x = *y;
    // *y = temp;
    // return;
    //             // call by reference
    // }
    // int main()
    // {
    //     int a = 34, b = 74;
    //     printf("%d and %d\n", a, b);
    //     swap(&a, &b);
    //     printf("%d and %d\n", a, b);
    return 0;
}