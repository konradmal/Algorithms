#O(1)
def triangle_type(side1: float, side2: float, side3: float) -> str:
    if not (side1 + side2 > side3 and side1 + side3 > side2 and side2 + side3 > side1):
        return "Cannot form a triangle"
    sides = sorted([side1, side2, side3])
    if sides[0] ** 2 + sides[1] ** 2 < sides[2] ** 2:
        return "Obtuse triangle"
    elif sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2:
        return "Right triangle"
    else:
        return "Acute triangle"

print(triangle_type(3, 4, 5))
print(triangle_type(10, 6, 8))
print(triangle_type(5, 5, 5))
print(triangle_type(1, 1, 2))