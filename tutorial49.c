#include <stdio.h>

int sum;
int myfunc(int a, int b){

int sum;
sum = a+b;
return sum;
}
int main(int argc, char const *argv[])
{
    //declaration -telling the compiler about the variable (no space reserved)
    // definition - declaration + space reservation
   int sum = myfunc(3, 5);
    printf("the sum is %d\n", sum);

    return 0;
}
