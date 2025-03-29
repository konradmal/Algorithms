#O(logn)
def gcd_iterative_optimized(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

#O(logn)
def gcd_recursive_optimized(a: int, b: int) -> int:
    if b:
        return gcd_recursive_optimized(b, a % b)
    return a

#O(logn)
def lcm_using_gcd(a: int, b: int) -> int:
    # return a * b // gcd_iterative_optimized(a, b)
    return a * b // gcd_recursive_optimized(a, b) 

print(lcm_using_gcd(12, 18))
print(lcm_using_gcd(28, 32))

#O(sqrt(n))
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

#O(sqrt(n))
def lcm_using_prime_factors(a: int, b: int) -> int:
    factors_a = factorize_efficient_list(a)
    factors_b = factorize_efficient_list(b)
    result = 1
    factor = 2
    while result <= max(a, b):
        count_a = factors_a.count(factor)
        count_b = factors_b.count(factor)
        max_count = max(count_a, count_b)
        result *= int(factor ** max_count)
        if a % result == 0 and b % result == 0 and result != 1:
            return result
        factor += 1
    return result

print(lcm_using_prime_factors(12, 18))
print(lcm_using_prime_factors(28, 32))