#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << " using function with 2 agrgument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << " using function with 3 agrgument" << endl;
    return a + b + c;
}
float volume(double r, int h)
{ // volume of cylinder
    return (3.14 * r * r * h);
}
int volume(int a)
{ //volume of cube
    return (a * a * a);
}
int volume(int l, int b, int h)
{ // volume of cuboid
    return (l * b * h);
}

int main()
{

    cout << "the sum of 3 and 6 is" << sum(3, 6) << endl;
    cout << "the sum of 3,7 and 6 is" << sum(3, 7, 6) << endl;

    cout << "the volume of cylinder of radius 3 is and height 5 is" << volume(3, 5) << endl;
    cout << " the volume of cube of side 3 is" << volume(3) << endl;
    cout << "the volume of cuboid of 3,6 and 7 is" << volume(3, 4, 5) << endl;
    return 0;
}