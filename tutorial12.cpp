#include <iostream>
using namespace std;

int main(){
// what is pointer -----> data type, which holds the address of other data type
  
  int a = 3;
  int *b = &a;
// & ---> address of operator

  cout<<" the address of a is "<<&a<<endl;

// * ---->( value of operator) deferencing operator

cout<<" the value at address b is"<<*b<<endl;

// pointer to pointer
int ** c= &b;

cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address of c is "<<*c<<endl;
cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;


return 0;
}