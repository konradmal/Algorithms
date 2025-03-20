#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reversed = 0;
    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return reversed;
}

int main() {
    cout << reverseNumber(1234) << endl;
    cout << reverseNumber(6543) << endl;
}