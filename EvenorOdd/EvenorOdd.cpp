
#include <iostream>
using namespace std;

bool isEven(int eger) { //yeah, was a bit bored when naming that parameter
    if (eger % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
start:
    cout << "Enter integer now!\n";
    int inp;
    cin >> inp;
    if (isEven(inp))
    {
        cout << inp << " is an even number\n";
    }
    else
    {
        cout << inp << " is an odd number\n";
    }
    // Make it looping
    cout << "Want to check another number?\n\n";
    goto start;
}

