#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout<<"this is tutorial 9";
    int age;
    cout << "tell me your age" << endl;
    cin >> age;

    /* selection control structure: if else - if else   ladder
    if ((age < 18) && (age > 0))
    {
        cout << "you cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "you are a kid and you will get a kid pass to the party" << endl;
    }
    else if (age < 1)
    {
        cout << " you are not yet born" << endl;
    }
    else
    {
        cout << "you can come to the party" << endl;
    } */

    //selection control structure: switch case statement

    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;

    case 2:
        cout << "you are 2" << endl;
        break;

    default:
        cout << "no special cases" << endl;
         break;
    }
    cout<<"done switch statement";
    return 0;
}
