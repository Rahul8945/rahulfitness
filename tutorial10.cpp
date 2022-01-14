#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // loops in c++
    // there are three type of loops in c++
    //   1. for loop
    //   2. while loop
    //   3. do-while loop

    /* for loop iin c++*/
    //  int i =1;
    // cout<<i<<endl;
    // i++;
    // cout<<i;
    // i++;

    for (int i = 1; i < 40; i++)
    {
        cout << i << endl;
    }

    /* while loop in c++ */
    // syntax:
    //while(condition)
    //{
    //     c++ statement;
    // }

    // printing 1 to 40 using while loop
    // int i = 1;
    // while (i <= 40)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    //  example of infinite loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

/* do-while loop in c++ */
// syntax:
// do
// {
//     c++ statement;
// }while(statement);

//printing in 1 to 40 using do-while loop
int i=1;
do{
    cout<<i<<endl;
    i++;
}while(i<=40);

    return 0;
}
