#include <stdio.h>
int main()
{

    int i,age;
    for(i=0; i<10; i++){
        printf("%d\n enter your age\n", i);
        scanf("%d", &age);
      //  if (age>10)
      // {  break;
      //  }
      if (age>10)
        {
        continue;
        }
        printf("we have not come across any continue statement");
        printf("Rahul is a good boy");

    }
    return 0;
}
    