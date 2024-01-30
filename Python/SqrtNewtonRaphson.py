def sqrt_newton_raphson(number: float, tolerance: float) -> float:
    approx_low = 1.0
    approx_high = number
    while abs(approx_low - approx_high) >= tolerance:
        approx_low = (approx_low + approx_high) / 2
        approx_high = number / approx_low
    return (approx_low + approx_high) / 2

print(sqrt_newton_raphson(3, 0.0001))