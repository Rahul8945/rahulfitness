#include <iostream>


using namespace std;
int main(int argc, char const *argv[])

{
    int n,range;
    
    cout << "enter a positive integer:" << endl;
    cin >> n;

    cout<<"range:"<<endl;
    cin>>range;

    for (int i = 1; i <= range; i++)
    {
        cout << n << "*" << i << "=" << n * i<< endl;
    }
    return 0;
}
