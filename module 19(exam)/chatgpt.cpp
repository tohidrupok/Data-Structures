#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word, int start, int end) {
    // Base case: when there's only one character left or when start and end cross
    if (start >= end) {
        return true;
    }

    // Recursive case: compare the start and end characters, and move towards the middle
    if (word[start] == word[end]) {
        return isPalindrome(word, start + 1, end - 1);
    }

    return false;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word, 0, word.length() - 1)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
