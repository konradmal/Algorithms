#include <iostream>
#include <vector>

using namespace std;

//O(amount * num_coins)
vector<int> changeDynamic(int amount, int coins[], int num_coins) {
    vector<int> min_coins(amount + 1, amount + 2);
    vector<int> last_coin_used(amount + 1, -1);

    min_coins[0] = 0;
    last_coin_used[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < num_coins; j++) {
            if (coins[j] <= i && min_coins[i - coins[j]] + 1 < min_coins[i]) {
                min_coins[i] = min_coins[i - coins[j]] + 1;
                last_coin_used[i] = j;
            }
        }
    }

    vector<int> change;
    if (min_coins[amount] == amount + 2) {
        return change;
    }

    while (amount > 0) {
        change.push_back(coins[last_coin_used[amount]]);
        amount -= coins[last_coin_used[amount]];
    }

    return change;
}

int main() {
    int denominations[] = {20, 19, 1};
    int size_of_array = sizeof(denominations) / sizeof(denominations[0]);
    vector<int> result = changeDynamic(58, denominations, size_of_array);
    for(int denomination : result){
        cout << denomination << ", ";
    }
}