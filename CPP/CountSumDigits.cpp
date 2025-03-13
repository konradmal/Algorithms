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

int countDigitsRecursive(int number) {
    if (number == 0)
        return 0;
    return 1 + countDigitsRecursive(number / 10);
}

int sumDigitsRecursive(int number) {
    if (number == 0)
        return 0;
    return (number % 10) + sumDigitsRecursive(number / 10);
}

int main() {
    cout << countDigits(12345) << endl;
    cout << countDigits(65432) << endl;
    cout << sumDigits(12345) << endl;
    cout << sumDigits(65432) << endl;

    cout << countDigitsRecursive(12345) << endl;
    cout << countDigitsRecursive(65432) << endl;
    cout << sumDigitsRecursive(12345) << endl;
    cout << sumDigitsRecursive(65432) << endl;
}
