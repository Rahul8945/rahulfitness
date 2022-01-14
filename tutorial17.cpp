#include <iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
//default agrument are write in right
float moneyreceived ( int currentmoney, float factor=1.04){
    return currentmoney * factor;
}
// int strlen(cons char *p){  // constant argument means they not change the value 

// }
int main(){
    int a,  b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<< "the product of a and b is"<<product(a,b)<<endl;
    int money = 100000;
    cout<<" if you have"<<money<<"rs in your account, you will receive "<<moneyreceived(money)<<"rs after 1 year"<<endl;
    cout<<" for vip if you have"<<money<<"rs in your account, you will receive "<<moneyreceived(money,1.1)<<"rs after 1 year";

return 0;
}