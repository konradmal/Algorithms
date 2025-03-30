#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//O(1)
string triangleType(double side1, double side2, double side3) {
    if (!(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)) {
        return "Cannot form a triangle";
    }
    vector<double> sides = {side1, side2, side3};
    sort(sides.begin(), sides.end());
    if (sides[0] * sides[0] + sides[1] * sides[1] < sides[2] * sides[2]) {
        return "Obtuse triangle";
    } else if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
        return "Right triangle";
    } else {
        return "Acute triangle";
    }
}

int main() {
    cout << triangleType(3, 4, 5) << endl;
    cout << triangleType(10, 6, 8) << endl;
    cout << triangleType(5, 5, 5) << endl;
    cout << triangleType(1, 1, 2) << endl;
}
