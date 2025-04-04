#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//O(n)
bool narcissisticNumber(int number) {
    vector<int> digits;
    int originalNumber = number;
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }
    int numDigits = digits.size();
    int sumOfPowers = 0;
    for (int i=0; i < digits.size(); i++) {
        sumOfPowers += pow(digits[i], numDigits);
    }
    return originalNumber == sumOfPowers;
}

int main() {
    cout << 153 << " : " << narcissisticNumber(153) << endl;
    cout << 154 << " : " << narcissisticNumber(154) << endl;
    cout << 1634 << " : " << narcissisticNumber(1634) << endl;
    cout << 1635 << " : " << narcissisticNumber(1635) << endl;
}