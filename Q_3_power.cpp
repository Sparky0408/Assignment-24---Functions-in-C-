#include <iostream>
#include <math.h>
using namespace std;

double power(double a, double b)
{
    double c;

    c = pow(a, b);

    return c;
}

int main()
{
    double x, y;

    cout << "enter the number: ";
    cin >> x;
    cout << "enter the power of that number: ";
    cin >> y;

    cout << "the " << x << " power " << y << " is " << power(x, y);

    return 0;
}