#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//O(n)
void factorizeBasic(int number){
    int factor = 2;
    while(number != 1){
        while(number % factor == 0){
            number /= factor;
            cout << factor << ", ";
        }
        factor++;
    }
    cout << endl;
}

//O(n)
vector<int> factorizeBasicVector(int number){
    vector<int> factors;
    int factor = 2;
    while(number != 1){
        while(number % factor == 0){
            number /= factor;
            factors.push_back(factor);
        }
        factor++;
    }
    return factors;
}

//O(n)
void factorizeOptimized(int number){
    while(number % 2 == 0){
        number /= 2;
        cout << 2 << ", ";
    }
    int factor = 3;
    while(number != 1){
        while(number % factor == 0){
            number /= factor;
            cout << factor << ", ";
        }
        factor += 2;
    }
    cout << endl;
}

//O(n)
vector<int> factorizeOptimizedVector(int number){
    vector<int> factors;
    while(number % 2 == 0){
        number /= 2;
        factors.push_back(2);
    }
    int factor = 3;
    while(number != 1){
        while(number % factor == 0){
            number /= factor;
            factors.push_back(factor);
        }
        factor += 2;
    }
    return factors;
}

//O(sqrt(n))
void factorizeEfficient(int number){
    while (number % 2 == 0){
        cout << 2 << ", ";
        number /= 2;
    }
    for (int factor = 3; factor <= sqrt(number); factor += 2){
        while (number % factor == 0){
            cout << factor << ", ";
            number /= factor;
        }
    }
    if (number > 1){
        cout << number;
    }
    cout << endl;
}

//O(sqrt(n))
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

//(nlogn)
vector<int> sieveOfEratosthenesList(int start, int end){
    vector<int> primeList;    
    bool *primes = new bool[end + 1];
    for(int i = 0; i <= end; i++){
        primes[i] = true;
    }
    primes[0] = false;
    primes[1] = false;
    for(int i = 2; i <= sqrt(end); i++){
        if (primes[i]){
            int multiple = i * 2;
            while (multiple <= end){
                primes[multiple] = false;
                multiple += i;
            }
        }
    }
    for(int i = start; i <= end; i++){
        if(primes[i]){
            primeList.push_back(i);
        }
    }
    delete [] primes;
    return primeList;
}

//(nlogn)
vector<int> factorizeUsingSieve(int number){
    vector<int> primes = sieveOfEratosthenesList(2, number);
    vector<int> factors;
    int index = 0;
    while (number != 1){
        while(number % primes[index] == 0){
            number /= primes[index];
            factors.push_back(primes[index]);
        }
        index++;
    }
    return factors;
}

int main() {
    factorizeBasic(24);
    factorizeBasic(40);
    factorizeBasic(120);
    factorizeBasic(132);

    vector<int> factors1;
    factors1 = factorizeBasicVector(24);
    for(int i = 0; i < factors1.size(); i++){
        cout << factors1[i] << ", ";
    }
    cout << endl;
    factors1 = factorizeBasicVector(40);
    for(int i = 0; i < factors1.size(); i++){
        cout << factors1[i] << ", ";
    }
    cout << endl;
    factors1 = factorizeBasicVector(120);
    for(int i = 0; i < factors1.size(); i++){
        cout << factors1[i] << ", ";
    }
    cout << endl;
    factors1 = factorizeBasicVector(132);
    for(int i = 0; i < factors1.size(); i++){
        cout << factors1[i] << ", ";
    }
    cout << endl;

    factorizeOptimized(24);
    factorizeOptimized(40);
    factorizeOptimized(120);
    factorizeOptimized(132);

    vector<int> factors2;
    factors2 = factorizeOptimizedVector(24);
    for(int i = 0; i < factors2.size(); i++){
        cout << factors2[i] << ", ";
    }
    cout << endl;
    factors2 = factorizeOptimizedVector(40);
    for(int i = 0; i < factors2.size(); i++){
        cout << factors2[i] << ", ";
    }
    cout << endl;
    factors2 = factorizeOptimizedVector(120);
    for(int i = 0; i < factors2.size(); i++){
        cout << factors2[i] << ", ";
    }
    cout << endl;
    factors2 = factorizeOptimizedVector(132);
    for(int i = 0; i < factors2.size(); i++){
        cout << factors2[i] << ", ";
    }
    cout << endl;

    factorizeEfficient(24);
    factorizeEfficient(40);
    factorizeEfficient(120);
    factorizeEfficient(132);

    vector<int> factors3;
    factors3 = factorizeEfficientVector(24);
    for(int i = 0; i < factors3.size(); i++){
        cout << factors3[i] << ", ";
    }
    cout << endl;
    factors3 = factorizeEfficientVector(40);
    for(int i = 0; i < factors3.size(); i++){
        cout << factors3[i] << ", ";
    }
    cout << endl;
    factors3 = factorizeEfficientVector(120);
    for(int i = 0; i < factors3.size(); i++){
        cout << factors3[i] << ", ";
    }
    cout << endl;
    factors3 = factorizeEfficientVector(132);
    for(int i = 0; i < factors3.size(); i++){
        cout << factors3[i] << ", ";
    }
    cout << endl;

    vector<int> factors4;
    factors4 = factorizeUsingSieve(24);
    for(int i = 0; i < factors4.size(); i++){
        cout << factors4[i] << ", ";
    }
    cout << endl;
    factors4 = factorizeUsingSieve(40);
    for(int i = 0; i < factors4.size(); i++){
        cout << factors4[i] << ", ";
    }
    cout << endl;
    factors4 = factorizeUsingSieve(120);
    for(int i = 0; i < factors4.size(); i++){
        cout << factors4[i] << ", ";
    }
    cout << endl;
    factors4 = factorizeUsingSieve(132);
    for(int i = 0; i < factors4.size(); i++){
        cout << factors4[i] << ", ";
    }
    cout << endl;
}