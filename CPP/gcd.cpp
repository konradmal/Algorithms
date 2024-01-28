#include <iostream>

using namespace std;

int gcd_iterative_unoptimized(int a, int b){
    while (a != b){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}

int gcd_recursive_unoptimized(int a, int b){
    if (a == b){
        return a;
    }
    if (a > b){
        return gcd_recursive_unoptimized(a - b, b);
    }
    return gcd_recursive_unoptimized(a, b - a);
}

int gcd_iterative_optimized(int a, int b){
    while (b){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int gcd_recursive_optimized(int a, int b){
    if (!b){
        return a;
    }
    return gcd_recursive_optimized(b, a % b);
}

int main(int argc, char** argv) {
    cout << gcd_iterative_unoptimized(12, 18) << endl;
    cout << gcd_iterative_unoptimized(32, 28) << endl;

    cout << gcd_recursive_unoptimized(12, 18) << endl;
    cout << gcd_recursive_unoptimized(32, 28) << endl;

    cout << gcd_iterative_optimized(12, 18) << endl;
    cout << gcd_iterative_optimized(32, 28) << endl;

    cout << gcd_recursive_optimized(12, 18) << endl;
    cout << gcd_recursive_optimized(32, 28) << endl;
}