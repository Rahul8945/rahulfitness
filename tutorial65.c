#include <stdio.h>
#include <stdlib.h>
int ispalindrome(int num)
{

    int reversed = 0;
    int originalnumber = num;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("the reversed number is %d\n", reversed);
    if (originalnumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);

    if (ispalindrome(number))
    {
        printf("this number is a palindrome\n");
    }
    else
    {
        printf("this number is not a palindrome\n");
    }

    return 0;
}