#O(n)
def is_prime(number: int) -> bool:
    if number <= 1:
        return False
    for divisor in range(2, number):
        if number % divisor == 0:
            return False
    return True

print(is_prime(13))
print(is_prime(23))
print(is_prime(27))

#O(sqrt(n))
def is_prime_optimized(number: int) -> bool:
    if number <= 1:
        return False
    for divisor in range(2, int(number**0.5) + 1):
        if number % divisor == 0:
            return False
    return True

print(is_prime_optimized(13))
print(is_prime_optimized(23))
print(is_prime_optimized(27))

#O(sqrt(n))
def is_prime_more_optimized(number: int) -> bool:
    if number <= 1:
        return False
    if number == 2:
        return True
    if number % 2 == 0:
        return False
    for divisor in range(3, int(number**0.5) + 1, 2):
        if number % divisor == 0:
            return False
    return True

print(is_prime_more_optimized(13))
print(is_prime_more_optimized(23))
print(is_prime_more_optimized(27))

#O(sqrt(n))
def is_prime_recursive(number: int, divisor: int = 3) -> bool:
    if number <= 1:
        return False
    if number == 2:
        return True
    if number % 2 == 0:
        return False
    if divisor > int(number ** 0.5):
        return True
    if number % divisor == 0:
        return False
    return is_prime_recursive(number, divisor + 2)

print(is_prime_recursive(13))
print(is_prime_recursive(23))
print(is_prime_recursive(27))