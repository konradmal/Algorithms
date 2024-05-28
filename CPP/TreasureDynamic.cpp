#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

vector<vector<int>> generateTreasureMap(int m, int n) {
    vector<vector<int>> board(m, vector<int>(n));
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = (rand() % 31) - 10;
        }
    }
    board[0][0] = 0;
    board[m-1][n-1] = 0;
    return board;
}

int treasureDynamic(int m, int n) {
    vector<vector<int>> board = generateTreasureMap(m, n);
    
    cout << "Generated board:\n";
    for (const vector<int>& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = board[0][0];
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j - 1] + board[0][j];
    }
    for (int i = 1; i < m; i++) {
        dp[i][0] = dp[i - 1][0] + board[i][0];
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + board[i][j];
        }
    }
    return dp[m-1][n-1];
}

int main() {
    int m = 4;
    int n = 6;
    int maxSum = treasureDynamic(m, n);
    cout << endl << "Max sum: " << maxSum << endl;
}