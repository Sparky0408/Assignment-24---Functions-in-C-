#include <iostream>

using namespace std;

int check(int y)
{
    int rem = 0, lar = 0;

    while (y != 0)
    {
        rem = y % 10;

        if (lar < rem)
        {
            lar = rem;
        }

        y = y / 10;
    }
    return lar;
}

int main()

{
    int x;

    cout << "enter number: ";

    cin >> x;

    cout << "largest digit is: " << check(x);

    return 0;
}