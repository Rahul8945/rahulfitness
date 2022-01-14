#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(int argc, char const *argv[])
 {
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    printf("the random number between 0 to 100 is %d\n",rand()%100);
     return 0;
 }
 