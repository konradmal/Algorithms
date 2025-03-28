#include <iostream>
using namespace std;

//O(logn)
string decimalToBaseIter(int number, int base) {
    string result = "";
    while (number > 0) {
        int remainder = number % base;
        if (remainder <= 9) {
            result = char(remainder + '0') + result;
        } else {
            result = char(remainder - 10 + 'A') + result;
        }
        number /= base;
    }
    return result.empty() ? "0" : result;
}

//O(logn)
string decimalToBaseRecur(int number, int base) {
    if (number == 0) {
        return "";
    }
    int remainder = number % base;
    char digit;
    if (remainder <= 9){
        digit = remainder + '0';
    }
    else{
        digit = remainder - 10 + 'A';
    }
    return decimalToBaseRecur(number / base, base) + digit;
}

int main() {
    cout << decimalToBaseIter(170, 2) << endl;
    cout << decimalToBaseIter(27, 4) << endl;
    cout << decimalToBaseIter(21, 6) << endl;
    cout << decimalToBaseIter(234, 16) << endl;

    cout << decimalToBaseRecur(170, 2) << endl;
    cout << decimalToBaseRecur(27, 4) << endl;
    cout << decimalToBaseRecur(21, 6) << endl;
    cout << decimalToBaseRecur(234, 16) << endl;
}