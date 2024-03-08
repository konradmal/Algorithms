def narcissistic_number(number: int) -> bool:
    digits = []
    original_number = number
    while number > 0:
        digits.append(number % 10)
        number //= 10
    num_digits = len(digits)
    sum_of_powers = sum(digit ** num_digits for digit in digits)
    return original_number == sum_of_powers

print(153,":",narcissistic_number(153))
print(154,":",narcissistic_number(154))
print(1634,":",narcissistic_number(1634))
print(1635,":",narcissistic_number(1635))