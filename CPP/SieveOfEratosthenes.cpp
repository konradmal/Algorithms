#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

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

int main() {
    sieveOfEratosthenes(20, 353);

    vector<int> sieveResult;
    sieveResult = sieveOfEratosthenesList(20, 353);
    for (int i = 0; i < sieveResult.size(); i++) {
        cout << sieveResult[i] << ", ";
    }
}