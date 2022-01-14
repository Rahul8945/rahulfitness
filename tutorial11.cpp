#include <iostream>
using namespace std;

int main()
{
    cout << "my name is rahul gupta" << endl;
    // for (int i = 0; i < 40; i++)
    // {
    //     cout << i << endl;
    //     if (i == 4)
    //     {
    //         break;
    //     }
    // }

for (int i = 0; i < 40; i++)
    {
        
        if (i == 4)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}