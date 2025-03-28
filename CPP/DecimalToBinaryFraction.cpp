#include <iostream>
#include <string>

using namespace std;

//O(n)
string decimalToBinaryFraction(double fraction, int limit) {
    string binary_fractional_part = "0.";
    while (fraction > 0 && limit--) {
        fraction *= 2;
        if (fraction >= 1) {
            binary_fractional_part += "1";
            fraction -= 1;
        } else {
            binary_fractional_part += "0";
        }
    }
    return binary_fractional_part;
}

//O(n)
string decimalToBinaryFractionRecursive(double fraction, int limit, string binary_fractional_part = "0.") {
    if (limit == 0 || fraction == 0.0) {
        return binary_fractional_part;
    }

    fraction *= 2;
    if (fraction >= 1) {
        return decimalToBinaryFractionRecursive(fraction - 1, limit - 1, binary_fractional_part + "1");
    } else {
        return decimalToBinaryFractionRecursive(fraction, limit - 1, binary_fractional_part + "0");
    }
}

int main() {
    cout << decimalToBinaryFraction(0.8, 10) << endl;
    cout << decimalToBinaryFractionRecursive(0.8, 10) << endl;
}
