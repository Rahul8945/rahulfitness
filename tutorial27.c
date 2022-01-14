#include <stdio.h>
int main()
{

    //   char a = '3';
    //  char *ptra = &a;
    //  printf("%d\n", ptra);
    //  ptra--;
    //  printf("%d\n", ptra);
    //printf("%d\n", ptra - 2);

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("valve at position 3 of the array is %d\n", arr[3]);
    printf("the address of first element of the array is %d \n", &arr[0]);
    printf("the address of first element of the array is %d \n", arr);
    printf("the address of second element of the array is %d \n", &arr[1]);
    printf("the address of second element of the array is %d \n", arr + 1);

    printf("the value at address of first element of the array is %d \n", *(&arr[0]));
    printf("the value at address of first element of the array is %d \n", *(arr));
    printf("the value at address of second element of the array is %d \n", *(&arr[1]));
    printf("the value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
} 