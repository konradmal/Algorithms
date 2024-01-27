#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#include <fstream>

using namespace std;

// Prime number
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

void sieveOfEratosthenes(int start, int end){
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
            cout << i << " is a prime number!" << endl;
        }
    }
    delete [] primes;
}

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

int main(int argc, char** argv) {
    // vector<int> data;
    // data.push_back(1);
    // data.push_back(2);
    // data.push_back(3);
    // for (int i = 0; i < data.size(); i++) {
    //     cout << data[i] << endl;
    // }
    // data.pop_back();
    // for (int i = 0; i < data.size(); i++) {
    //     cout << data[i] << endl;
    // }

    // -------------------------

    // cout << isPrime(13) << endl;
    // cout << isPrime(23) << endl;
    // cout << isPrime(27) << endl;

    // cout << isPrimeOptimized(13) << endl;
    // cout << isPrimeOptimized(23) << endl;
    // cout << isPrimeOptimized(27) << endl;

    // cout << isPrimeMoreOptimized(13) << endl;
    // cout << isPrimeMoreOptimized(23) << endl;
    // cout << isPrimeMoreOptimized(27) << endl;

    // sieveOfEratosthenes(20, 353);

    // vector<int> sieveResult;
    // sieveResult = sieveOfEratosthenesList(20, 353);
    // for (int i = 0; i < sieveResult.size(); i++) {
    //     cout << sieveResult[i] << ", ";
    // }
}