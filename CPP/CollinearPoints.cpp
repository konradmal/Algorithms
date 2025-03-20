#include <iostream>
using namespace std;

bool collinearPoints(double x1, double y1, double x2, double y2, double x3, double y3) {
    double area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    return area == 0.0;
}

int main() {
    cout << collinearPoints(1,1,3,3,6,6) << endl;
    cout << collinearPoints(1,2,2,4,3,6) << endl;
    cout << collinearPoints(1,3,3,2,2,4) << endl;
    cout << collinearPoints(2,1,3,1,4,2) << endl;
}