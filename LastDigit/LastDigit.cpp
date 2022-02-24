// LastDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int separateNumbers(string numbers, int index) {
//    for (size_t i = 0; i < (int)numbers.length(); i++)
//    {
//        if (index == i)
//        {
//            return (int)numbers[i];
//        }
//    }
//    return 0;
//}

int lastDigit(int number) {
    return number % 10;
}

int main()
{
start:
    int digits;
    int reverse = 0;
    int rem;
    int last;
    cout << "Enter number!\n";
    cin >> digits;
    last = lastDigit(digits);
    cout << "Last digit: " << last << endl;
    while (digits != 0)
    {
        rem = digits & 10;
        reverse = reverse * 10 + rem;
        digits /= 10;
    }


    cout << "Digits in reverse order: " << rem << " " << digits;

    goto start;


}

