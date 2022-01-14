#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */ 
    int eId;
    char favchar;
    float salary;

} ep;

union money
{
    /* data */
    int rice;
    int car;
    float pound;

};



int main(){
    // ep harry;
  



    // harry.eId =1;
    // harry.favchar='c';
    // harry.salary=120000;
    // cout<<"the value is"<<harry.eId<<endl;
    
    // cout<<"the value is"<<harry.favchar<<endl;
    
    // cout<<"the value is"<<harry.salary<<endl;

    //   union money m1; 
    // m1.rice =34;
    // m1.car ='c';
    // cout<<m1.car<<endl;

    enum meal{breakfast,lunch,dinner};
    meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    

return 0;
}