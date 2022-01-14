#include <iostream>
using namespace std;

int sum(int a, int b) // call by value method is passes the value of varible
{
    int c = a + b;
    return c;
}
// this will not swap a and b
//void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// call by reference using pointer // call by reference method is  passes the address at variable
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 5;
    cout << "the value of a is" << a << "and the value of b is" << b << endl;
    //swap(a,b); // this will not swap a and b
    swappointer(&a, &b);
    cout << "the value of a is" << a << "and the value of b is" << b << endl;

    return 0;
}