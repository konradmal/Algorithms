#O(amount * len(denominations))
def change_greedy(amount: int, denominations: list) -> list:
    change = []
    for denomination in denominations:
        while denomination <= amount:
            change.append(denomination)
            amount -= denomination
    return change

print(change_greedy(43, [500, 200, 100, 50, 20, 10, 5, 2, 1]))