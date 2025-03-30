#include <iostream>

using namespace std;

//O(n*m)
bool containsPattern(string text, string pattern) {
    for (int i = 0; i < text.length(); i++) {
        int j = 0;
        while ((i + j) < text.length() && j < pattern.length() && text[i + j] == pattern[j]) {
            j++;
        }
        if (j > 0 && j == pattern.length()) {
            return true;
        }
    }
    return false;
}

int main() {
	cout << containsPattern("environment", "men") << endl;
	cout << containsPattern("history", "story") << endl;
	cout << containsPattern("teacher", "each") << endl;
}