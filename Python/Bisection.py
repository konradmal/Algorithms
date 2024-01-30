def f(x: float) -> float:
    return 2*x*x*x - 2*x - 8    #1.7963

def bisection_method_iterative(start: float, end: float, tolerance: float) -> float:
    if f(start) * f(end) > 0:
        return None
    midpoint = (start + end) / 2
    while end - start >= tolerance:
        midpoint = (start + end) / 2
        if f(midpoint) == 0.0:
            return midpoint
        if f(start) * f(midpoint) < 0:
            end = midpoint
        else:
            start = midpoint
    return midpoint

print(bisection_method_iterative(0, 5, 0.0001))

def bisection_method_recursive(start: float, end: float, tolerance: float) -> float:
    if f(start) * f(end) > 0:
        return None
    midpoint = (start + end) / 2
    if end - start < tolerance or f(midpoint) == 0.0:
        return midpoint
    if f(start) * f(midpoint) < 0:
        return bisection_method_recursive(start, midpoint, tolerance)
    return bisection_method_recursive(midpoint, end, tolerance)

print(bisection_method_recursive(0, 5, 0.0001))