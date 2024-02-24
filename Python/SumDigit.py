def sum_digits(number: int) -> int:
    sum = 0
    while number > 0:
        sum += number % 10
        number //= 10
    return sum

print(sum_digits(12345))
print(sum_digits(65432))