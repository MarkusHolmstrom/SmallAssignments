// CelsiusToFahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // https://www.programiz.com/cpp-programming/string-float-conversion string to double
using namespace std;

// check if there is any letters in the input
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

