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
    double fraction = 0.8;
    int limit = 10;
    string binary_number = decimalToBinaryFraction(fraction, limit);
    cout << binary_number << endl;
    string binary_number_recursive = decimalToBinaryFractionRecursive(fraction, limit);
    cout << binary_number_recursive << endl;
}
