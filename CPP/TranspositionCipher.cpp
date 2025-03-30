#include <iostream>
#include <string>
using namespace std;

//O(n)
string transpositionCipher(string text) {
    string swapped = "";
    for (int i = 0; i < text.length() - 1; i += 2) {
        swapped += text[i + 1];
        swapped += text[i];
    }
    if (text.length() % 2 != 0) {
        swapped += text[text.length() - 1];
    }
    return swapped;
}

int main() {
    cout << transpositionCipher("COMPUTER") << endl;
    cout << transpositionCipher("PHONE") << endl;
}