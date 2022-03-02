
#include <iostream>

using namespace std;

int getAbs(int i) {
    if (i < 0)
    {
        i *= -1;
    }
    return i;
}

int main()
{
start:
    int a;
    int b;
    cout << "Enter integer value A now!\n";
    cin >> a;
    cout << "Number A: " << a << "\n";
    cout << "Enter integer value B now!\n";
    cin >> b;
    cout << "Number B: " << b << "\n";

    a = getAbs(a);
    b = getAbs(b);
    cout << "The absolute difference is " << a + b << "\n";
    goto start;
}

