#include <iostream>

using namespace std;

//O(n)
int fibonacciIterative(int n){
    if (n <= -1){
        return -1;
    }
    if (n == 0){
        return 0;
    }
    int a = 1;
    int b = 1;
    for(int i=1; i<n; i++){
        int tmp = a;
        a = b;
        b = tmp + b;
    }
    return a;
}

//O(2^n)
int fibonacciRecursive(int n){
    if (n <= -1){
        return -1;
    }
    if (n == 0){
        return 0;
    }
    if (n <= 2){
        return 1;
    }
    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}

int main() {
    cout << fibonacciIterative(10) << endl;
    cout << fibonacciIterative(33) << endl;
    cout << fibonacciIterative(34) << endl;

    cout << fibonacciRecursive(10) << endl;
    cout << fibonacciRecursive(33) << endl;
    cout << fibonacciRecursive(34) << endl;
}