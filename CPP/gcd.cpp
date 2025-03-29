#include <iostream>

using namespace std;

//O(n)
int gcdIterativeUnoptimized(int a, int b){
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

//O(n)
int gcdRecursiveUnoptimized(int a, int b){
    if (a == b){
        return a;
    }
    if (a > b){
        return gcdRecursiveUnoptimized(a - b, b);
    }
    return gcdRecursiveUnoptimized(a, b - a);
}

//O(logn)
int gcdIterativeOptimized(int a, int b){
    while (b){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

//O(logn)
int gcdRecursiveOptimized(int a, int b){
    if (!b){
        return a;
    }
    return gcdRecursiveOptimized(b, a % b);
}

int main() {
    cout << gcdIterativeUnoptimized(12, 18) << endl;
    cout << gcdIterativeUnoptimized(32, 28) << endl;

    cout << gcdRecursiveUnoptimized(12, 18) << endl;
    cout << gcdRecursiveUnoptimized(32, 28) << endl;

    cout << gcdIterativeOptimized(12, 18) << endl;
    cout << gcdIterativeOptimized(32, 28) << endl;

    cout << gcdRecursiveOptimized(12, 18) << endl;
    cout << gcdRecursiveOptimized(32, 28) << endl;
}