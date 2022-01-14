#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
}
int main()
{
    int playerscore = 0, compscore = 0;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("welcome to rock, paper, scissors.\n");

    for (int i = 0; i < 3; i++)
    {

        printf("player 1's turn:\n");
        printf("choose 1 for Rock, 2 for Paper and 3 for Scissors\n ");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];

        printf("computer's turn:\n");
        printf("choose 1 for Rock, 2 for Paper and 3 for Scissors\n ");
        temp = generaterandomnumber(3) + 1;
        playerchar = dict[temp - 1];

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1
        }
        else
        {
            playerscore += 1;
        }
    }

    printf("the random number between 0 to 5 is %d\n", generaterandomnumber(2));
    return 0;
}