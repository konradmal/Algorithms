#O(n)
def decimal_to_binary_fraction(fraction: float, limit: int) -> str:
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

print(decimal_to_binary_fraction(0.8, 10))

#O(n)
def decimal_to_binary_fraction_recursive(fraction: float, limit: int, binary_fractional_part: str = "0.") -> str:
    if limit == 0 or fraction == 0.0:
        return binary_fractional_part

    fraction *= 2
    if fraction >= 1:
        return decimal_to_binary_fraction_recursive(fraction - 1, limit - 1, binary_fractional_part + "1")
    else:
        return decimal_to_binary_fraction_recursive(fraction, limit - 1, binary_fractional_part + "0")

print(decimal_to_binary_fraction_recursive(0.8, 10))