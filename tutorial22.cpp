
// nesting of member function
#include<iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter a binary number" << endl;

    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "displaying your number" << endl;
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i);
}
cout<<endl;
}

int main()
{
    
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

// oops-classes and objects
    //c++ --->intitially called--->c with classes by stroustroup
    //class --> extension of structure (in c)
    // structure had limititations
    //--> member are public
    //--> no method
    // classes --> structures + more
    // classes --> can have method and properties
    //classes --> can make few member as private & few as public
    // structure in c++ are typedef
    // you can declare objects along with the class declaration
    // class employee {
    // class definition
    // }harry, rohan, lovish
    // harry. salary = 8 makes no sense if salary is private

   
   