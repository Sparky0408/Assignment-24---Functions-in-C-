#include <iostream>
using namespace std;

void add(int a, int b, int c = 0)
{
    int z;
    z = a + b + c;

    cout << "the addition of these numner is " << z;
}
int main()
{
    int x, y, z, a;
    cout << "you want to add two or three number press 1 for 2 number and 2 for three number: ";
    cin >> a;
    switch (a)
    {

    case 1:
    {
        cout << "enter two number: ";
        cin >> x >> y;
        add(x, y);
        break;
    }
    case 2:
    {
        cout << "enter two or three number: ";
        cin >> x >> y >> z;
        add(x, y, z);
        break;
    }
    }

    return 0;
}