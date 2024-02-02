#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int gcdIterativeOptimized(int a, int b){
    while (b){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int gcdRecursiveOptimized(int a, int b){
    if (!b){
        return a;
    }
    return gcdRecursiveOptimized(b, a % b);
}

int lcm_using_gcd(int a, int b){
    // return a * b / gcdIterativeOptimized(a, b);
    return a * b / gcdRecursiveOptimized(a, b);
}

vector<int> factorizeEfficientVector(int number){
    vector<int> factors;
    while (number % 2 == 0){
        factors.push_back(2);
        number /= 2;
    }
    for (int factor = 3; factor <= sqrt(number); factor += 2){
        while (number % factor == 0){
            factors.push_back(factor);
            number /= factor;
        }
    }
    if (number > 1){
        factors.push_back(number);
    }
    return factors;
}

int lcmUsingPrimeFactors(int a, int b){
    vector<int> factors_a = factorizeEfficientVector(a);
    vector<int> factors_b = factorizeEfficientVector(b);
    int count_a, count_b, max_count;
    int result = 1;
    int factor = 2;
    while(result <= max(a, b)){
        count_a = count(factors_a.begin(), factors_a.end(), factor);
        count_b = count(factors_b.begin(), factors_b.end(), factor);
        max_count = max(count_a, count_b);
        result *= int(pow(factor, max_count));
        if(a % result == 0 && b % result == 0 && result != 1){
            return result;
        }
        factor++;
    }
    return result;
}

int main(int argc, char** argv) {
    cout << lcm_using_gcd(12, 18) << endl;
    cout << lcm_using_gcd(32, 28) << endl;

    cout << lcmUsingPrimeFactors(12, 18) << endl;
    cout << lcmUsingPrimeFactors(32, 28) << endl;
}