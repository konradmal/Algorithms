#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number){
    if (number <= 1){
        return false;
    }
    for (int divisor = 2; divisor < number; divisor++){
        if (number % divisor == 0){
            return false;
        }    
    }
    return true;
}

bool isPrimeOptimized(int number){
    if (number <= 1){
        return false;
    }
    for (int divisor = 2; divisor <= sqrt(number); divisor++){
        if (number % divisor == 0){
            return false;
        }    
    }
    return true;
}

bool isPrimeMoreOptimized(int number){
    if (number <= 1){
        return false;
    }
    if (number == 2){
        return true;
    }
    if (number % 2 == 0){
        return false;
    }
    for (int divisor = 3; divisor <= sqrt(number); divisor += 2){
        if (number % divisor == 0){
            return false;
        }    
    }
    return true;
}

bool isPrimeRecursive(int number, int divisor = 3) {
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    if (divisor > sqrt(number)) {
        return true;
    }
    if (number % divisor == 0) {
        return false;
    }
    return isPrimeRecursive(number, divisor + 2);
}

int main() {
    cout << isPrime(13) << endl;
    cout << isPrime(23) << endl;
    cout << isPrime(27) << endl;

    cout << isPrimeOptimized(13) << endl;
    cout << isPrimeOptimized(23) << endl;
    cout << isPrimeOptimized(27) << endl;

    cout << isPrimeMoreOptimized(13) << endl;
    cout << isPrimeMoreOptimized(23) << endl;
    cout << isPrimeMoreOptimized(27) << endl;

    cout << isPrimeRecursive(13) << endl;
    cout << isPrimeRecursive(23) << endl;
    cout << isPrimeRecursive(27) << endl;
}