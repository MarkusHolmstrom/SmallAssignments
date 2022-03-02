
#include <iostream>
#include <string>
using namespace std;

template <class genType>
genType GetMax(genType a, genType b) {
    return (a > b ? a : b);
}

// check if there is any letters in the input (also in GuessGame)
bool isNumber(string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main()
{
start:
    string first, second;
    cout << "Enter value A now!\n";
    cin >> first;
    if (!isNumber(first))
    { 
        cout << "Invalid input " << first << " for ValueA, integers only!\n";
        goto start;
    }
    int a = stoi(first);
b:
    cout << "Enter value B now!\n";
    cin >> second;
    if (!isNumber(second))
    {
        cout << "Invalid input " << second << " for ValueB, integers only!\n";
        goto b;
    }
    int b = stoi(second);

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

