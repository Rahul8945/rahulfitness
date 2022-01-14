#include <stdio.h>
#include <string.h>

int main()

{
char s1[] = "rahul";
char s2[] = "harr";
char s3[54];
// puts(strcat(s1,s2));
// printf("thr strcmp for s1 , s2 returned %d",strcmp(s1 ,s2));
printf("the length of s1 is %d\n",strlen(s1));
printf("the length of s2 is %d\n",strlen(s2));

printf("the reversed string s1 is:");
puts(strrev(s1));
printf("the reversed string s2 is:");
puts(strrev(s2));

strcpy(s3 ,strcat(s1,s2));
puts(s3);

return 0;
}