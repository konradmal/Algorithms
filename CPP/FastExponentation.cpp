#include <iostream>

using namespace std;

int fastExponentiationIterative(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int fastExponentiationRecursive(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent % 2 == 1) {
        return base * fastExponentiationRecursive(base, exponent - 1);
    }
    int half = fastExponentiationRecursive(base, exponent / 2);
    return half * half;
}

int main() {
    cout << fastExponentiationIterative(2, 10) << endl;
    cout << fastExponentiationIterative(3, 5) << endl;

    cout << fastExponentiationRecursive(2, 10) << endl;
    cout << fastExponentiationRecursive(3, 5) << endl;
}