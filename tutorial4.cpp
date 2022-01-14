#include <iostream>
using namespace std;
int glo = 6;
void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 78;
    int a = 5;
    int b = 4;
    float pi = 3.14;
    char c = 'u';
    bool d = false;
    sum();
    cout <<d;
    cout << glo;
    // cout << "this is tutorial 4.\nhere the value of a is " << a << ".\nthe value of b is " << b;
    // cout << "\nthe value of pi is " << pi;
    // cout << "\nthe value of c is " << c;

    return 0;
}