def count_digits(number: int) -> int:
    count = 0
    while number > 0:
        count += 1
        number //= 10
    return count

def sum_digits(number: int) -> int:
    sum = 0
    while number > 0:
        sum += number % 10
        number //= 10
    return sum

print(count_digits(12345))
print(count_digits(65432))
print(sum_digits(12345))
print(sum_digits(65432))