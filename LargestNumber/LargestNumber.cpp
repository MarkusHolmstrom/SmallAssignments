// LargestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class genType>
genType GetMax(genType a, genType b) {
    return (a > b ? a : b);
}

int main()
{
start:
    int a, b;
    cout << "Enter value A now!\n";
    cin >> a;
    if (cin.fail())
    {
        cout << "Invalid input, integers only!\n";
        goto start;
    }
b:
    cout << "Enter value B now!\n";
    cin >> b;
    if (cin.fail())
    {
        cout << "Invalid input, integers only!\n";
        goto b;
    }
    auto largest = GetMax(a, b);
    if (largest == a && a != b)
    {
        cout << "ValueA(" << largest << ") is higher than ValueB(" << b << ")\n";
    }
    else if (largest == b && a != b)
    {
        cout << "ValueB(" << largest << ") is higher than ValueA(" << a << ")\n";
    }
    else // safeplay: if a == b
    {
        cout << "ValueA(" << a << ") is equal to ValueB(" << b << ")\n";
    }
    cout << "Restarting system... calculating many things...\n";
    goto start;
}

