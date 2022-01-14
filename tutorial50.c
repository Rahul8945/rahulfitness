# include <stdio.h>
# include <stdlib.h>
int main(int argc, char const *argv[])
{
     
int chars,i =0;
char *ptr;
while (i < 3)
{
    printf("Employee %d:enter the number of character in your employee id\n",i+1);
    scanf("%d",&chars);
    ptr = (char *) malloc ((chars+1)*sizeof(char));
    printf("enter your employee id\n");
    scanf("%s",ptr);
    printf("your employee id is %s\n",ptr);
    free(ptr);

    i = i + 1;
}



    
    return 0;
}
