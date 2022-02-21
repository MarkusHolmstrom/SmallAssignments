// AbsoluteDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// int numbers[] {1,2,3,4,5};
// int(&ref)[5] = numbers;

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
}

