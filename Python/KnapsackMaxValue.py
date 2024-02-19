def knapsack_max_value(capacity: int, weights: list, values: list) -> int:
    dpTable = [[0 for _ in range(capacity + 1)] for _ in range(len(values) + 1)]
    for i in range(1, len(values) + 1):
        for w in range(1, capacity + 1):
            if weights[i - 1] <= w:
                dpTable[i][w] = max(values[i - 1] + dpTable[i - 1][w - weights[i - 1]], dpTable[i - 1][w])
            else:
                dpTable[i][w] = dpTable[i - 1][w]
    return dpTable[len(values)][capacity]

values = [60, 100, 120, 110, 140]
weigths = [1, 2, 3, 4, 5]
capacity = 6
print(knapsack_max_value(capacity, weigths, values))