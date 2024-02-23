def narcissistic_number(number):
    digits = [int(d) for d in str(number)]
    num_digits = len(digits)
    sum_of_powers = sum(d ** num_digits for d in digits)
    return number == sum_of_powers

print(153,":",narcissistic_number(153))
print(154,":",narcissistic_number(154))
print(1634,":",narcissistic_number(1634))
print(1635,":",narcissistic_number(1635))