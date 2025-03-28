#O(amount * len(denominations))
def change_dynamic(amount: int, denominations: list) -> list:
    min_coins = [amount + 2] * (amount + 1)
    last_denom = [-1] * (amount + 1)
    
    min_coins[0] = 0
    last_denom[0] = 0
    
    for i in range(1, amount + 1):
        for j, denom in enumerate(denominations):
            if denom <= i and min_coins[i - denom] + 1 < min_coins[i]:
                min_coins[i] = min_coins[i - denom] + 1
                last_denom[i] = j

    change = []
    while amount > 0:
        if last_denom[amount] == -1:
            return []
        change.append(denominations[last_denom[amount]])
        amount -= denominations[last_denom[amount]]

    return change

print(change_dynamic(58, [20, 19, 1]))
