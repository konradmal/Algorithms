#include <iostream>
#include <string>
using namespace std;

string decimalToFactorial(int decimal_number) {
    int factorial = 1;
    int index = 1;
    while (factorial * (index + 1) <= decimal_number) {
        index += 1;
        factorial *= index;
    }
    string factorial_representation = "";
    while (index > 0) {
        int digit = decimal_number / factorial;
        factorial_representation += to_string(digit);
        decimal_number %= factorial;
        factorial /= index;
        index -= 1;
    }
    return factorial_representation;
}

int main() {
    cout << decimalToFactorial(40) << endl;
}