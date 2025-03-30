#O(sqrt(n))
def is_perfect_number(number: int) -> bool:
    if number <= 1:
        return False
    sum_of_divisors = 1
    for divisor in range(2, int(number ** 0.5) + 1):
        if number % divisor == 0:
            sum_of_divisors += divisor
            sum_of_divisors += number // divisor
        if number == divisor * divisor:
            sum_of_divisors -= divisor
    if sum_of_divisors == number:
        return True
    return False

print(is_perfect_number(6)) # 1+2+3=6
print(is_perfect_number(28)) # 1+2+4+7+14=28
print(is_perfect_number(12))
print(is_perfect_number(25))