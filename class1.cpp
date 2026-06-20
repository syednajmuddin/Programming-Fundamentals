 #include <iostream>
#include <string>

using namespace std;

// Helper functions
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isConsonant(char ch) {
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z' && !isVowel(ch));
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int main() {
    string str = "Lecturer (B-17)";
    int vowels = 0, consonants = 0, digits = 0;

    for (char ch : str) {
        if (isVowel(ch)) vowels++;
        else if (isConsonant(ch)) consonants++;
        else if (isDigit(ch)) digits++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;

    return 0;
}