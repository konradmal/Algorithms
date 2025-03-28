#O(n)
def horner_iterative(coeffs: list, x_value: float) -> float:
    result = coeffs[0]
    for coefficient in coeffs[1:]:
        result = result * x_value + coefficient
    return result

print(horner_iterative([3, 3, -2, 11], 2.5))

#O(n)
def horner_recursive(coeffs: list, x: float, degree: int = None) -> float:
    if degree is None:
        degree = len(coeffs) - 1
    if degree == 0:
        return coeffs[0]
    return x * horner_recursive(coeffs, x, degree - 1) + coeffs[degree]

print(horner_recursive([3, 3, -2, 11], 2.5))