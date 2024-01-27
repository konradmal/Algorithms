# Prime number
def is_prime(number: int) -> bool:
    if number <= 1:
        return False
    for divisor in range(2, number):
        if number % divisor == 0:
            return False
    return True

# Test
# print(is_prime(13))
# print(is_prime(23))
# print(is_prime(27))

def is_prime_optimized(number: int) -> bool:
    if number <= 1:
        return False
    for divisor in range(2, int(number**0.5) + 1):
        if number % divisor == 0:
            return False
    return True

# Test
# print(is_prime_optimized(13))
# print(is_prime_optimized(23))
# print(is_prime_optimized(27))

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

# Test
# print(is_prime_more_optimized(13))
# print(is_prime_more_optimized(23))
# print(is_prime_more_optimized(27))

# Sieve of Eratosthenes
def sieve_of_eratosthenes(start: int, end: int):
    primes = (end + 1) * [True]
    primes[0] = primes[1] = False
    for i in range(2, int(end**0.5) + 1):
        if primes[i]:
            multiple = i * 2
            while multiple <= end:
                primes[multiple] = False
                multiple += i
    for i in range(start, end + 1):
        if primes[i]:
            print(str(i) + " is a prime number!")

# Test
# sieve_of_eratosthenes(20, 353)

def sieve_of_eratosthenes_list(start: int, end: int) -> list:
    prime_list = []
    primes = (end + 1) * [True]
    primes[0] = primes[1] = False
    for i in range(2, int(end**0.5) + 1):
        if primes[i]:
            multiple = i * 2
            while multiple <= end:
                primes[multiple] = False
                multiple += i
    for i in range(start, end + 1):
        if primes[i]:
            prime_list.append(i)
    return prime_list

# Test
# print(sieve_of_eratosthenes_list(20, 353))