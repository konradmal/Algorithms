def sum_iterative(number: int) -> int:
    if number < 0:
        return -1
    total_sum = 0
    for i in range(1, number + 1):
        total_sum += i
    return total_sum

print(sum_iterative(5))
print(sum_iterative(10))

def sum_recursive(number: int) -> int:
    if number < 0:
        return -1
    if number == 0:
        return 0
    return number + sum_recursive(number - 1)

print(sum_recursive(5))
print(sum_recursive(10))

def factorial_iterative(number: int) -> int:
    if number < 0:
        return -1
    result = 1
    for i in range(2, number + 1):
        result *= i
    return result

print(factorial_iterative(5))
print(factorial_iterative(10))

def factorial_recursive(number: int) -> int:
    if number < 0:
        return -1
    if number <= 1:
        return 1
    return number * factorial_recursive(number - 1)

print(factorial_recursive(5))
print(factorial_recursive(10))