def is_triangle(side1: float, side2: float, side3: float) -> bool:
    return side1 + side2 > side3 and side1 + side3 > side2 and side2 + side3 > side1

print(is_triangle(3.5, 4.5, 5.5))
print(is_triangle(3, 4, 5))
print(is_triangle(2, 2, 4))
print(is_triangle(-2, 3.1, 4.4))