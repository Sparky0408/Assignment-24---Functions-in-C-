#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()

{
    int x, y;

    cout << "enter first number: ";
    cin >> x;
    cout << "enter second number: ";
    cin >> y;

    cout << "before swap is first= " << x << " second= " << y<<endl;

    swap(&x, &y);

    cout << "after swap is first= " << x << " second= " << y;

    return 0;
}