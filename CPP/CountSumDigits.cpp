#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int sumDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    cout << countDigits(12345) << endl;
    cout << countDigits(65432) << endl;
    cout << sumDigits(12345) << endl;
    cout << sumDigits(65432) << endl;
}
