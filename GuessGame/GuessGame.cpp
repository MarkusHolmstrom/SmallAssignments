
#include <iostream>
#include <string>

using namespace std;

int getRandomNumber(int min, int max) {
    return rand() % max + min;
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
    cout << "Want to play again? (type 'y' for yay, 'n' or anything else for nay!)\n";
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
    // create random number to guess
    int randNumber = getRandomNumber(0, 10);
    // input
    string guess;
    // Counts the valid guesses
    int guesses = 0;

    cout << "Hello! Welcome to guessing game between numbers 0 to 10, your first guess?\n";
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
    // Adds to the valid guess counter
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
            return 0;
        }
    }
    else
    {
        cout << "Incorrect, try again:\n";
        goto invalidGuess;
    }
}



