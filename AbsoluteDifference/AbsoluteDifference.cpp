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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
