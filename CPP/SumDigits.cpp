#include <iostream>
using namespace std;

int sumDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    cout << sumDigits(12345) << endl;
    cout << sumDigits(65432) << endl;
}
