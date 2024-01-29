def fibonacci_iterative(n: int) -> int:
    if n <= -1:
        return -1
    if n == 0:
        return 0
    a, b = 1, 1
    for i in range(n-1):
        a,b = b, a+b
    return a

print(fibonacci_iterative(10))
print(fibonacci_iterative(33))
print(fibonacci_iterative(34))

def fibonacci_recursive(n: int) -> int:
    if n <= -1:
        return -1
    if n == 0:
        return 0
    if n <= 2:
        return 1
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)

print(fibonacci_recursive(10))
print(fibonacci_recursive(33))
print(fibonacci_recursive(34))