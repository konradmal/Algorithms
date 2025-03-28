#O(n)
def decimal_to_factorial(decimal_number: int) -> str:
    factorial = 1
    index = 1
    while factorial * (index + 1) <= decimal_number:
        index += 1
        factorial *= index
    factorial_representation = ""
    while index > 0:
        digit = decimal_number // factorial
        factorial_representation += str(digit)
        decimal_number %= factorial
        factorial //= index
        index -= 1
    return factorial_representation

decimal_number = 40
print(decimal_to_factorial(decimal_number))