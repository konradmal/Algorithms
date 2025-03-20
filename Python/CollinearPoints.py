def collinear_points(x1, y1, x2, y2, x3, y3):
    area = x1 * (y2 - y3) + \
           x2 * (y3 - y1) + \
           x3 * (y1 - y2)

    return area == 0.0

print(collinear_points(1,1,3,3,6,6))
print(collinear_points(1,2,2,4,3,6))
print(collinear_points(1,3,3,2,2,4))
print(collinear_points(2,1,3,1,4,2))