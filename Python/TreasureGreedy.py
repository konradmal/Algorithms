import random

#O(m*n)
def generate_treasure_map(m: int, n: int) -> list:
    board = [[random.randint(-10, 20) for _ in range(n)] for _ in range(m)]
    board[0][0] = 0
    board[m-1][n-1] = 0
    return board

#O(m*n)
def treasure_greedy(m, n):
    board = generate_treasure_map(m, n)
    print("Generated board:")
    for row in board:
        print(row)
    sum = board[0][0]
    i, j = 0, 0
    while i < m - 1 or j < n - 1:
        if i == m - 1:
            j += 1
        elif j == n - 1:
            i += 1
        else:
            if board[i + 1][j] > board[i][j + 1]:
                i += 1
            else:
                j += 1
        sum += board[i][j]
    return sum

m = 4
n = 6
max_sum = treasure_greedy(m, n)
print("\nMax sum:", max_sum)