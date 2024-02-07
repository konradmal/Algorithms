print(int("10101010",2))
print(int("123",4))
print(int("33",6))
print(int("EA",16))

def decimal_to_base_iter(n: int, base: int) -> str:
    result = ""
    while n > 0:
        remainder = n % base
        if remainder <= 9:
            result = str(remainder) + result
        else:
            result = chr(55 + remainder) + result
        n //= base
    return result if result else "0"

print(decimal_to_base_iter(170, 2))
print(decimal_to_base_iter(27, 4))
print(decimal_to_base_iter(21, 6))
print(decimal_to_base_iter(234, 16))

def decimal_to_base_recur(n: int, base: int) -> str:
    if n == 0:
        return ""
    remainder = n % base
    digit = chr(55 + remainder) if remainder > 9 else str(remainder)
    return decimal_to_base_recur(n // base, base) + digit

print(decimal_to_base_recur(170, 2))
print(decimal_to_base_recur(27, 4))
print(decimal_to_base_recur(21, 6))
print(decimal_to_base_recur(234, 16))