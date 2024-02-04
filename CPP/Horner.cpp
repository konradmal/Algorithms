#include <iostream>

using namespace std;

double hornerIterative(double coeffs[], int degree, double x) {
    double result = coeffs[0];
    for (int i = 1; i <= degree; i++) {
        result = result * x + coeffs[i];
    }
    return result;
}

double hornerRecursive(double coeffs[], int degree, double x) {
    if (degree == 0) {
        return coeffs[0];
    }
    return x * hornerRecursive(coeffs, degree - 1, x) + coeffs[degree];
}

int main() {
    double hor[] = {3, 3, -2, 11};
    cout << hornerIterative(hor, 3, 2.5) << endl;
    cout << hornerRecursive(hor, 3, 2.5) << endl;
}