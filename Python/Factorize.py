def factorize_basic(number: int):
    factor = 2
    while number != 1:
        while number % factor == 0:
            number //= factor
            print(factor, end=", ")
        factor += 1
    print()

factorize_basic(24)
factorize_basic(40)
factorize_basic(120)
factorize_basic(132)

def factorize_basic_list(number: int) -> list:
    factor = 2
    factors = []
    while number != 1:
        while number % factor == 0:
            number //= factor
            factors.append(factor)
        factor += 1
    return factors

print(factorize_basic_list(24))
print(factorize_basic_list(40))
print(factorize_basic_list(120))
print(factorize_basic_list(132))

def factorize_optimized(number: int):
    while number % 2 == 0:
        number //= 2
        print(2, end=", ")
    factor = 3
    while number != 1:
        while number % factor == 0:
            number //= factor
            print(factor, end=", ")
        factor += 2
    print()

factorize_optimized(24)
factorize_optimized(40)
factorize_optimized(120)
factorize_optimized(132)

def factorize_optimized_list(number: int) -> list:
    factors = []
    while number % 2 == 0:
        number //= 2
        factors.append(2)
    factor = 3
    while number != 1:
        while number % factor == 0:
            number //= factor
            factors.append(factor)
        factor += 2
    return factors

print(factorize_optimized_list(24))
print(factorize_optimized_list(40))
print(factorize_optimized_list(120))
print(factorize_optimized_list(132))

def factorize_efficient(number: int):
    while number % 2 == 0:
        print(2, end=", ")
        number //= 2
    factor = 3
    while factor * factor <= number:
        while number % factor == 0:
            print(factor, end=", ")
            number //= factor
        factor += 2
    if number > 1:
        print(number, end=", ")
    print()

factorize_efficient(24)
factorize_efficient(40)
factorize_efficient(120)
factorize_efficient(132)

def factorize_efficient_list(number: int) -> list:
    factors = []
    while number % 2 == 0:
        factors.append(2)
        number //= 2
    factor = 3
    while factor * factor <= number:
        while number % factor == 0:
            factors.append(factor)
            number //= factor
        factor += 2
    if number > 1:
        factors.append(number)
    return factors

print(factorize_efficient_list(24))
print(factorize_efficient_list(40))
print(factorize_efficient_list(120))
print(factorize_efficient_list(132))

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

def factorize_using_sieve(number: int) -> list:
    primes = sieve_of_eratosthenes_list(2, number)
    prime_index = 0
    factors = []
    while number != 1:
        while number % primes[prime_index] == 0:
            number //= primes[prime_index]
            factors.append(primes[prime_index])
        prime_index += 1
    return factors

print(factorize_using_sieve(24))
print(factorize_using_sieve(40))
print(factorize_using_sieve(120))
print(factorize_using_sieve(132))