#include <iostream>

using namespace std;

bool isPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right])
            return false;
        left++;
        right--;
    }
    return true;
}

bool isPalindromeRecursive(string word, int left, int right) {
    if (left >= right)
        return true;
    if (word[left] != word[right])
        return false;
    return isPalindromeRecursive(word, left + 1, right - 1);
}

int main() {
	cout << isPalindrome("radar") << endl;
	cout << isPalindrome("racecar") << endl;
	cout << isPalindrome("rotator") << endl;

	cout << isPalindromeRecursive("radar", 0, 4) << endl;
	cout << isPalindromeRecursive("racecar", 0, 6) << endl;
	cout << isPalindromeRecursive("rotator", 0, 6) << endl;
}