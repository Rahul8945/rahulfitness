#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("FILE name is %s\n", __FILE__);
    printf("today's DATE is %s\n", __DATE__);
    printf("time now is %s\n", __TIME__);
    printf("line no is %d\n", __LINE__);
     printf("ANSI: %d\n", __STDC__);
    return 0;
}
