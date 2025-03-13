def count_digits(number: int) -> int:
    count = 0
    while number > 0:
        count += 1
        number //= 10
    return count

print(count_digits(12345))
print(count_digits(65432))

def sum_digits(number: int) -> int:
    sum = 0
    while number > 0:
        sum += number % 10
        number //= 10
    return sum

print(sum_digits(12345))
print(sum_digits(65432))

def count_digits_recursive(number: int) -> int:
    if number == 0:
        return 0
    return 1 + count_digits_recursive(number // 10)

print(count_digits_recursive(12345))
print(count_digits_recursive(65432))

def sum_digits_recursive(number: int) -> int:
    if number == 0:
        return 0
    return (number % 10) + sum_digits_recursive(number // 10)

print(sum_digits_recursive(12345))
print(sum_digits_recursive(65432))