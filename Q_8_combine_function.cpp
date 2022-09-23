#include <iostream>
using namespace std;

float area(int a)
{
    return 3.14 * a * a;
}
int area(int a, int b)
{
    return a * b;
}

int main()
{
    float x, y, z;
    cout << "enter radius of circle: ";

    cin >> x;

    cout << "enter lenght and breath of rectangle: ";

    cin >> y >> z;

    cout << "the area of the circle is " << area(x) << endl;

    cout << "the area of rectangle is " << area(y, z);

    return 0;
}