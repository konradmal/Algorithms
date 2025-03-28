#include <iostream>
#include <vector>

using namespace std;

//O(amount * num_coins)
vector<int> changeGreedy(int amount, int coins[], int num_coins){
    vector<int> change;
    for(int i = 0; i < num_coins; i++){
        while(coins[i] <= amount){
            change.push_back(coins[i]);
            amount -= coins[i];
        }
    }
    return change;
}

int main() {
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int size_of_array = sizeof(denominations) / sizeof(denominations[0]);
    vector<int> result = changeGreedy(43, denominations, size_of_array);
    for(int denomination : result){
        cout << denomination << ", ";
    }
}