#include <iostream>

using namespace std;

bool isTriangle(double side1, double side2, double side3) {
    return side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1;
}



int main() {
    cout << isTriangle(3.5, 4.5, 5.5) << endl;
    cout << isTriangle(3, 4, 5) << endl;
	cout << isTriangle(2, 2, 4) << endl;
	cout << isTriangle(-2, 3.1, 4.4) << endl;
}