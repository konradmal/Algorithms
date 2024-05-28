def convert_to_binary_fraction(fraction, limit):
    binary_fractional_part = "0."
    while fraction > 0 and limit > 0:
        fraction *= 2
        if fraction >= 1:
            binary_fractional_part += "1"
            fraction -= 1
        else:
            binary_fractional_part += "0"
        limit -= 1
    return binary_fractional_part

fraction = 0.8
binary_number = convert_to_binary_fraction(fraction, 10)
print(binary_number)