def reverse_number(number: int) -> int:
    reversed_number = 0
    while number != 0:
        digit = number % 10
        reversed_number = reversed_number * 10 + digit
        number //= 10
    return reversed_number

print(reverse_number(1234))
print(reverse_number(6543))