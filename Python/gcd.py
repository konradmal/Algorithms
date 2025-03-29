#O(n)
def gcd_iterative_unoptimized(a: int, b: int) -> int:
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    return a

print(gcd_iterative_unoptimized(12,18))
print(gcd_iterative_unoptimized(28,32))

#O(n)
def gcd_recursive_unoptimized(a: int, b: int) -> int:
    if a == b:
        return a
    if a > b:
        return gcd_recursive_unoptimized(a - b, b)
    return gcd_recursive_unoptimized(a, b - a)

print(gcd_recursive_unoptimized(12,18))
print(gcd_recursive_unoptimized(28,32))

#O(logn)
def gcd_iterative_optimized(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

print(gcd_iterative_optimized(12,18))
print(gcd_iterative_optimized(28,32))

#O(logn)
def gcd_recursive_optimized(a: int, b: int) -> int:
    if b:
        return gcd_recursive_optimized(b, a % b)
    return a

print(gcd_recursive_optimized(12,18))
print(gcd_recursive_optimized(28,32))