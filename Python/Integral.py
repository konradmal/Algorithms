#O(1)
def f(x: float) -> float:
    return 2*x*x+x+2

#O(n)
def rectangular_integral(a: int, b: int, n: int) -> float:
    h = (b - a) / n
    area = 0.0
    mid_point = a + (b - a) / (2 * n)
    for i in range(n):
        area += f(mid_point)
        mid_point += h
    return area * h

print(rectangular_integral(2, 5, 1000))

#O(n)
def trapezoidal_integral(a: int, b: int, n: int) -> float:
    h = (b - a) / n
    area = 0.0
    side_a = f(a)
    for i in range(1, n + 1):
        side_b = f(a + h * i)
        area += (side_a + side_b) / 2
        side_a = side_b
    return area * h

print(trapezoidal_integral(2, 5, 1000))