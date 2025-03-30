#include <iostream>
#include <cmath>

using namespace std;

//O(logn)
double sqrtNewtonRaphson(double number, double tolerance) {
    double lowerApprox = 1;
    double upperApprox = number;
    while (abs(lowerApprox - upperApprox) >= tolerance) {
        lowerApprox = (lowerApprox + upperApprox) / 2;
        upperApprox = number / lowerApprox;
    }
    return (lowerApprox + upperApprox) / 2;
}

int main() {
    cout << sqrtNewtonRaphson(3, 0.0001) << endl;
}