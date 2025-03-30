#include <iostream>
using namespace std;

//O(1)
bool pointInsideTriangle(double Ax, double Ay, double Bx, double By, double Cx, double Cy, double Dx, double Dy) {
    if (((Dy - Ay) * (Bx - Ax) > (By - Ay) * (Dx - Ax) &&
        (Dy - By) * (Cx - Bx) > (Cy - By) * (Dx - Bx) &&
        (Dy - Cy) * (Ax - Cx) > (Ay - Cy) * (Dx - Cx)) || 
        ((Dy - Ay) * (Bx - Ax) < (By - Ay) * (Dx - Ax) &&
        (Dy - By) * (Cx - Bx) < (Cy - By) * (Dx - Bx) &&
        (Dy - Cy) * (Ax - Cx) < (Ay - Cy) * (Dx - Cx))){
    return true;
    }
    return false;
}

int main() {
    cout << pointInsideTriangle(0, 0, 4, 0, 2, 4, 2, 2) << endl;
    cout << pointInsideTriangle(0, 0, 4, 0, 2, 4, 4, 4) << endl;
}