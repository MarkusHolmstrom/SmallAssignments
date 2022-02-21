// GuessGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int getRandomNumber(int min, int max) {
    return rand() & max + min;
}

// check if there is any letters in the input
bool isNumber(string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

bool playAgain() {
    string inp;
    cout << "Want to play again? (type 'y' for yay, 'n' for nay!)";
    cin >> inp;
    if (inp == "y")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
start:
    int randNumber = getRandomNumber(0, 10);
    string guess;
    int guesses = 0;
    cout << "Hello! Welcome to guessing game, your first guess?\n";
invalidGuess:
    cin >> guess;
    // Checks for invalid inputs
    if (!isNumber(guess))
    {
        cout << "Invalid input, (only) a number please!!!1!! \n";
        goto invalidGuess;
    }
    int i = stoi(guess);
    if (i < 0 || i > 10)
    {
        cout << "Invalid number, min 0 and max 10!!!1!! \n";
        goto invalidGuess;
    }
    // Correct guess counter
    guesses++;
    // Correct number?
    if (i == randNumber)
    {
        cout << i << " is correct, it took you " << guesses << " tries.\n";
        if (playAgain())
        {
            goto start;
        }
        else
        {
            string end;
            cin >> end;
        }
    }
    else
    {
        cout << randNumber;
        cout << "Incorrect, try again:\n";
        goto invalidGuess;
    }
}



