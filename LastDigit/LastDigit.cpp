
#include <iostream>
using namespace std;

int lastDigit(int number) {
    return number % 10;
}

int main()
{
start:
    int digits;
    int last;
    cout << "Enter number!\n";
    cin >> digits;
    last = lastDigit(digits);
    cout << "Last digit: " << last << endl;
    goto start;
}

