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

int main() {
    double fraction = 0.8;
    string binary_number = decimalToBinaryFraction(fraction, 10);
    cout << binary_number << endl;
}
