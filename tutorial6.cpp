
//there are two type of header files
//1. system header files : it comes with the compiler
#include <iostream>
//2. user defined header files : it is written by the programmer
//#include "this.h" //--> this will produce an error if this.h is no present in the current directory
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "operater in c++:" << endl;
    cout << "following are type of operator in c++" << endl;
    // arithmatic operators
    cout << " the value of a+b is " << a + b << endl;
    cout << " the value of a-b is " << a - b << endl;
    cout << " the value of a*b is " << a * b << endl;
    cout << " the value of a/b is " << a / b << endl;
    cout << " the value of a%b is " << a % b << endl;
    cout << " the value of a++ is " << a++ << endl;
    cout << " the value of a-- is " << a-- << endl;
    cout << " the value of ++a is " << ++a << endl;
    cout << " the value of --a is " << --a << endl;
    cout << endl;

    cout << "following are the comparison operator in c++" << endl;

    cout << "the value of a == b is " << (a == b) << endl;
    cout << "the value of a != b is " << (a != b) << endl;
    cout << "the value of a >= b is " << (a >= b) << endl;
    cout << "the value of a <= b is " << (a <= b) << endl;
    cout << "the value of a > b is " << (a > b) << endl;
    cout << "the value of a < b is " << (a < b) << endl;
    cout << endl;
 
    // logical operator
    cout << "following are the logical operator in c++" << endl;
    cout << "the value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical not operator (!(a==b))is:" << (!(a == b)) << endl;

    return 0;
}