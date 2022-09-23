#include <iostream>

int add(int x, int y)
{
    return x + y;
}

float add(float i, float j)
{
    return i + j;
}

using namespace std;
int main()
{
    int a, b;
    float c, d;

    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "enter another two number: ";
    cin >> c >> d;

    cout << "addittion of two number is " << add(a, b)<<endl;
    cout << "addion of another two number is " << add(c, d);

    return 0;
}