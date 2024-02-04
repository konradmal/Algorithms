#include <iostream>
#include <string>
using namespace std;

string transpositionCipher(string word) {
    string swapped = "";
    for (int i = 0; i < word.length() - 1; i += 2) {
        swapped += word[i + 1];
        swapped += word[i];
    }
    if (word.length() % 2 != 0) {
        swapped += word[word.length() - 1];
    }
    return swapped;
}

int main() {
    cout << transpositionCipher("COMPUTER") << endl;
    cout << transpositionCipher("PHONE") << endl;
}