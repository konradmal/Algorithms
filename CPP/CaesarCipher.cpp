#include <iostream>
using namespace std;

string caesarCipher(string text, int key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            char c = (text[i] + key - 'A') % 26 + 'A';
            if (c < 'A') c += 26;
            result += c;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            char c = (text[i] + key - 'a') % 26 + 'a';
            if (c < 'a') c += 26;
            result += c;
        } else {
            result += text[i];
        }
    }
    return result;
}

string caesarDecipher(string text, int key) {
    return caesarCipher(text, -key);
}

int main() {
    cout << caesarCipher("ABCXYZabcxyz Cat!Dog^Mouse.", -3) << endl;
    cout << caesarCipher("ABCXYZabcxyz Cat!Dog^Mouse.", -29) << endl;
    cout << caesarCipher("ABCXYZabcxyz Cat!Dog^Mouse.", 3) << endl;
    cout << caesarCipher("ABCXYZabcxyz Cat!Dog^Mouse.", 29) << endl;
    
    cout << caesarDecipher("XYZUVWxyzuvw Zxq!Ald^Jlrpb.", -3) << endl;
    cout << caesarDecipher("XYZUVWxyzuvw Zxq!Ald^Jlrpb.", -29) << endl;
    cout << caesarDecipher("DEFABCdefabc Fdw!Grj^Prxvh.", 3) << endl;
    cout << caesarDecipher("DEFABCdefabc Fdw!Grj^Prxvh.", 29) << endl;
}