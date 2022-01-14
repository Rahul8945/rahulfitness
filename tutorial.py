#include <stdio.h>
int main()
{
    int num;
    printf ("enter the number you want multiplication table of:\n");
    scanf ("%d", &num);

    printf ("multiplication table of %d is as follow:\n");

   // printf ("%d X 1 = %d\ n", num, num*1);
   //  printf ("%d X 2 = %d\n", num, num*2);
    
    for (int i = 1; i < 11; i++)
    {
    printf ("%d X %d = %d\n", num,i, num*i);
    }
    
    
    return 0;
}