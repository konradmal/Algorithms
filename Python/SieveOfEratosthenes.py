#O(nlogn)
def sieve_of_eratosthenes(start: int, end: int) -> None:
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

sieve_of_eratosthenes(20, 353)

#O(nlogn)
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

print(sieve_of_eratosthenes_list(20, 353))