
#include <iostream>
using namespace std;

bool isPalindrome(string word) {
    for (int i = 0; i < word.size(); i++) {
        // check if letters match (also capital letters)
        if (tolower(word[i]) != tolower(word[word.size() - i - 1])) {
            return false;
        }
    }
    return true;
}

int main()
{
start:
    string word;
    cout << "Enter a word: "; 
    cin >> word;

    if (isPalindrome(word)) {
        cout << "The word " << '"' << word << '"' << " is a palindrome" << endl;
    }
    else {
        cout << "The word " << '"' << word << '"' << " is not a palindrome" << endl;
    }
    cout << "Try another word?" << endl;
    goto start;
}

