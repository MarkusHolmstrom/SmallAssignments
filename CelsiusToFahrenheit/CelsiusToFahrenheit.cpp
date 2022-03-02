
#include <iostream>
#include <string> 
using namespace std;

// check if there is any letters in the input
bool isNumber(string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        // Check if it is a number or dot (for double values)
        if (!isdigit(str[i]) && str[i] != '.') {
            cout << str[i] << endl;
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
    // convert input to double
    double celsius = stod(input);
    cout << celsius << " degrees Celsius is " << getFahrenheit(celsius) << " degrees Fahrenheit\n";
    cout << "Restarting..." << endl;
    goto start;
}

