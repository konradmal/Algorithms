#O(n)
def to_decimal(number: str, base: int) -> int:
    result = 0
    power = len(number) - 1
    for digit in number:
        if '0' <= digit <= '9':
            result += int(digit) * base ** power
        elif 'A' <= digit <= 'Z':
            result += (ord(digit) - 55) * base ** power
        elif 'a' <= digit <= 'z':
            result += (ord(digit) - 87) * base ** power
        power -= 1
    return result

print(to_decimal("10101010", 2))
print(to_decimal("123", 4))
print(to_decimal("33", 6))
print(to_decimal("EA", 16))
print(to_decimal("ea", 16))

#O(n)
def to_decimal_int(number: int, base: int) -> int:
    result = 0
    power = 0
    while number > 0:
        digit = number % 10
        result += digit * (base ** power)
        number //= 10
        power += 1
    return result

print(to_decimal_int(10101010, 2))
print(to_decimal_int(123, 4))
print(to_decimal_int(33, 6))