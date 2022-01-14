#include <iostream>
using namespace std;

int main(){
//array example
int marks[]={23,45,56,90};
int mathmarks[4];
mathmarks[0] =2323;
mathmarks[1] =923;
mathmarks[2] =623;
mathmarks[3] =823;

cout<<"these are math marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;


cout<<"these are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of marks "<< i << "is" << marks[i] <<endl;
// }
// int i = 0;
//  while ( i<=3)
//  {
//      cout<<"the value of marks "<< i << "is" << marks[i] <<endl;
//      i++;
//  }
 
// int i = 0;
// do{
//     cout<<"the value of marks "<< i << "is" << marks[i] <<endl;
//     i++;
// }while(i<=4);

// pointer and arrays
int *p = marks;
cout<<"the value of *p is"<<*p<<endl;
cout<<"the value of *(p+1) is"<<*(p+1)<<endl;
cout<<"the value of *(p+2) is"<<*(p+2)<<endl;
cout<<"the value of *(p+3) is"<<*(p+3)<<endl;

return 0;
}