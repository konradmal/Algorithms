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

int treasureGreedy(int m, int n) {
    vector<vector<int>> board = generateTreasureMap(m, n);
    
    cout << "Generated board:" << endl;
    for (const vector<int>& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    int sum = board[0][0];
    int i = 0, j = 0;
    while (i < m - 1 || j < n - 1) {
        if (i == m - 1) {
            j++;
        } else if (j == n - 1) {
            i++;
        } else {
            if (board[i + 1][j] > board[i][j + 1]) {
                i++;
            } else {
                j++;
            }
        }
        sum += board[i][j];
    }
    return sum;
}

int main() {
    int m = 4;
    int n = 6;
    int maxSum = treasureGreedy(m, n);
    cout << endl << "Max sum: " << maxSum << endl;
}