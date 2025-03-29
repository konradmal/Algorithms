#include <iostream>
#include <iomanip>
using namespace std;

//O(1)
double f(double x) {
    return 2 * x * x + x + 2;
}

//O(n)
double rectangularIntegral(int a, int b, int n) {
    double h = (b - a) / static_cast<double>(n);
    double area = 0.0;
    double mid = a + h / 2;
    for (int i = 0; i < n; i++) {
        area += f(mid);
        mid += h;
    }
    return area * h;
}

//O(n)
double trapezoidalIntegral(int a, int b, int n) {
    double h = (b - a) / static_cast<double>(n);
    double area = 0.0;
    double sideA = f(a);
    double sideB;
    for (int i = 1; i <= n; i++) {
        sideB = f(a + h * i);
        area += (sideA + sideB) / 2;
        sideA = sideB;
    }
    return area * h;
}

int main() {
    cout << setprecision(16) << fixed << rectangularIntegral(2, 5, 1000) << endl;
    cout << setprecision(16) << fixed << trapezoidalIntegral(2, 5, 1000) << endl;
}