#include <iostream>

using namespace std;

//O(1)
double f(double x){
    return 2*x*x*x-2*x-8;    //1.7963
}

//(logn)
double bisectionMethodIterative(double start, double end, double tolerance) {
    if (f(start) * f(end) > 0) {
        return start - 1;
    }
    double midpoint;
    while (end - start >= tolerance) {
        midpoint = (start + end) / 2;
        if (f(midpoint) == 0) {
            return midpoint;
        }
        if (f(start) * f(midpoint) < 0) {
            end = midpoint;
        } else {
            start = midpoint;
        }
    }
    return midpoint;
}

//(logn)
double bisectionMethodRecursive(double start, double end, double tolerance) {
    double midpoint = (start + end) / 2;
    if (f(start) * f(end) > 0) {
        return start - 1;
    }
    if (end - start < tolerance || f(midpoint) == 0)
        return midpoint;
    if (f(start) * f(midpoint) < 0) {
        return bisectionMethodRecursive(start, midpoint, tolerance);
    }
    return bisectionMethodRecursive(midpoint, end, tolerance);
}

int main() {
    cout << bisectionMethodIterative(0, 5, 0.0001) << endl;
    cout << bisectionMethodRecursive(0, 5, 0.0001) << endl;
}