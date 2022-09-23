#include <iostream>
using namespace std;

void check(int a, int b)
{
    if (a > b)
        cout << "the max number is: " << a;

    else
        cout << "the max number is: " << b;
}

void check(char c, int d)
{
    if (c < 0)
        cout << "real number: ";
    if (d < 0)
        cout << "integer";
}

int main()
{

    int first, second;

    cout << "enter first number: ";
    cin >> first;
    cout << "enter second number: ";
    cin >> second;
    check(first, second);
    check(first, second);
    return 0;
}