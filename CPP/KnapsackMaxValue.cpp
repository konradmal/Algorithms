#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int KnapsackMaxValue(int capacity, int weights[], int values[], int numItems) {
    vector<vector<int>> dp(numItems + 1, vector<int>(capacity + 1, 0));
    for (int i = 1; i <= numItems; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[numItems][capacity];
}

int main() {
    int values[] = {60, 100, 120, 110, 140};
    int weights[] = {1, 2, 3, 4, 5};
    int capacity = 6;
    int numItems = sizeof(values) / sizeof(values[0]);
    cout << "Maximum value in knapsack: " << KnapsackMaxValue(capacity, weights, values, numItems) << endl;
}