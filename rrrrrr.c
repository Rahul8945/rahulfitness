
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[45];
    char s2[34];
    gets(s1);
    gets(s2);
    puts(strcat(s1, s2));
    return 0;
}
