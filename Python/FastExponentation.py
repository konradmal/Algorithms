def fast_exponentiation_iterative(base: int, exponent: int) -> int:
    result = 1
    while exponent:
        if exponent % 2 == 1:
            result *= base
        exponent //= 2
        base *= base
    return result

print(fast_exponentiation_iterative(2, 10))
print(fast_exponentiation_iterative(3, 5))

def fast_exponentiation_iter_with_bin(base: int, exponent: int) -> int:
    result = base
    multiplier = base
    binary_exponent = bin(exponent)[3:]
    for bit in binary_exponent:
        result *= result
        if bit == "1":
            result *= multiplier
    return result

print(fast_exponentiation_iter_with_bin(2, 10))
print(fast_exponentiation_iter_with_bin(3, 5))

def fast_exponentiation_recursive(base: int, exponent: int) -> int:
    if exponent == 0:
        return 1
    if exponent % 2 == 1:
        return base * fast_exponentiation_recursive(base, exponent - 1)
    half_result = fast_exponentiation_recursive(base, exponent // 2)
    return half_result * half_result

print(fast_exponentiation_recursive(2, 10))
print(fast_exponentiation_recursive(3, 5))
