#include <iostream>
#include <string>

using namespace std;

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
    string binary_number = decimalToBinaryFraction(0.8, 10);
    cout << binary_number << endl;
    string binary_number_recursive = decimalToBinaryFractionRecursive(0.8, 10);
    cout << binary_number_recursive << endl;
}
