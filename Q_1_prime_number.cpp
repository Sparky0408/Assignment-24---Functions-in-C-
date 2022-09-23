#include <iostream>

using namespace std;

void prime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            i = 1;
            break;
        }
    }
    if (i == 1)

        cout << x << " is not a prime number ";

    else

        cout << x << " is a prime number ";
}

int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    prime(x);

    return 0;
}