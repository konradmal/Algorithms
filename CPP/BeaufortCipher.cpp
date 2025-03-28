#include <iostream>
#include <vector>
using namespace std;

//O(n)
string beaufortCipher(string text, int k) {
    int n = text.length();
    string ciphertext = "";
    for (int i = 0; i < n; i++) {
        ciphertext += (90 - text[i] + k) % 26 + 65;
        k += (i + 1);
    }
    return ciphertext;
}

int main() {
    string text = "CAT";
    cout << text << endl;
    string encrypted_text = beaufortCipher(text, 1);
    cout << encrypted_text << endl;
    string text2 = "MOUSE";
    cout << text2 << endl;
    string encrypted_text2 = beaufortCipher(text2, 14);
    cout << encrypted_text2 << endl;
}