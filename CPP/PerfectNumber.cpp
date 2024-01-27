#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectNumber(int number){
    if(number <= 1){
        return false;
    }
    int sumOfDivisors = 1;
    for(int divisor = 2; divisor <= sqrt(number); divisor++){
        if(number % divisor == 0){
            sumOfDivisors += divisor;
            sumOfDivisors += number / divisor;
        }
        if(number == divisor * divisor){
            sumOfDivisors -= divisor;
        }
    }
    if (sumOfDivisors == number){
        return true;
    }
    return false;
}

int main(int argc, char** argv) {
    cout << isPerfectNumber(6) << endl; //1+2+3
    cout << isPerfectNumber(28) << endl; //1+2+4+7+14
    cout << isPerfectNumber(12) << endl;
    cout << isPerfectNumber(25) << endl;
}