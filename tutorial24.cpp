#include <iostream>
using namespace std;

class employee;
{
    int id;
    int count;
    int harry;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id;
    }
};
int main()
{
    Employee Harry;
    // harry.id = 1;
    // harry.count = 1;  //cannot do this as id and count are private

    harry.setdata();
    harry.getdata();

    return 0;
}