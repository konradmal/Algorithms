#include <iostream>
#include <cmath>
using namespace std;

int toDecimal(string number, int base) {
    int result = 0;
    for (int i = 0, power = number.length() - 1; i < number.length(); i++, power--) {
        int digitValue;
        if (number[i] >= '0' && number[i] <= '9') {
            digitValue = number[i] - '0';
        } else if (number[i] >= 'A' && number[i] <= 'Z') {
            digitValue = number[i] - 'A' + 10;
        } else if (number[i] >= 'a' && number[i] <= 'z') {
            digitValue = number[i] - 'a' + 10;
        } else {
            continue;
        }
        result += digitValue * static_cast<int>(pow(base, power));
    }
    return result;
}

int main() {
    cout << toDecimal("10101010", 2) << endl;
    cout << toDecimal("123", 4) << endl;
    cout << toDecimal("33", 6) << endl;
    cout << toDecimal("EA", 16) << endl; 
    cout << toDecimal("ea", 16) << endl;
}