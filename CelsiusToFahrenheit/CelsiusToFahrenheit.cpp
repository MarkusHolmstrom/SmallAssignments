// CelsiusToFahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // https://www.programiz.com/cpp-programming/string-float-conversion string to double
using namespace std;

bool isNumber(string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

double getFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main()
{
    string input;
    start:
    cout << "Celsius: \n";
    cin >> input;
    if (!isNumber(input))
    {
        cout << "Invalid input, (only) a number please!!!1!! \n";
        goto start;
    }
    double celsius = stod(input);
    cout << celsius << " degrees Celsius is " << getFahrenheit(celsius) << " degrees Fahrenheit";
    cin >> input;
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