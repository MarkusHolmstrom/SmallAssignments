// ArethmicProgression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

void printArray(vector<int> v) {
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            cout << v.at(i);
            return;
        }
        cout << v.at(i) << ", ";
    }
}

bool isArithmetic(vector<int> v) {
    int diff = 0;
    int prev = 0;
    int counter = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i == 0 && v.size() > 1)
        {
            diff = abs(v.at(i) - v.at(1));
            //cout << diff << endl;
        }
        else
        {
            if (diff == abs(prev - v.at(i))) 
            {
            //cout << diff << " : " << prev << ", " << v.at(i);
                counter++;
            }
            else
            {
                return false;
            }
        }
        prev = v.at(i);
    }
    if (counter >= v.size() - 1)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> numbers{};
    int length;
    cout << "Enter length of numbers!\n";
    cin >> length;

    int* array = new int[length];

    for (int i = 0; i < length; i++) {
        int temp;
        cout << "Enter a number!" << endl;
        cin >> temp;
        numbers.push_back(temp);
    }
    cout << "Numbers chosen: ";
    printArray(numbers);
    cout << endl;
    if (isArithmetic(numbers))
    {
        cout << "Series has arithmetic progression";
    }
    else
    {
        cout << "Series has NOOOOOOOOOO arithmetic progression at all, what the hell were you thinking????";
    }
}

