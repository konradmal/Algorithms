import random

#O(m*n)
def generate_treasure_map(m: int, n: int) -> int:
    board = [[random.randint(-10, 20) for _ in range(n)] for _ in range(m)]
    board[0][0] = 0
    board[m-1][n-1] = 0
    return board

#O(m*n)
def treasure_dynamic(m, n):
    board = generate_treasure_map(m, n)
    print("Generated board:")
    for row in board:
        print(row)
    dp = [[0] * n for _ in range(m)]
    dp[0][0] = board[0][0]
    for j in range(1, n):
        dp[0][j] = dp[0][j - 1] + board[0][j]
    for i in range(1, m):
        dp[i][0] = dp[i - 1][0] + board[i][0]
    for i in range(1, m):
        for j in range(1, n):
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + board[i][j]
    return dp[-1][-1]

m = 4
n = 6
max_sum = treasure_dynamic(m, n)
print("\nMax sum:", max_sum)