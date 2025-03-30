#O(1)
def point_inside_triangle(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy):
    if (((Dy - Ay) * (Bx - Ax) > (By - Ay) * (Dx - Ax) and
         (Dy - By) * (Cx - Bx) > (Cy - By) * (Dx - Bx) and
         (Dy - Cy) * (Ax - Cx) > (Ay - Cy) * (Dx - Cx)) or
        ((Dy - Ay) * (Bx - Ax) < (By - Ay) * (Dx - Ax) and
         (Dy - By) * (Cx - Bx) < (Cy - By) * (Dx - Bx) and
         (Dy - Cy) * (Ax - Cx) < (Ay - Cy) * (Dx - Cx))):
        return True
    return False

print(point_inside_triangle(0, 0, 4, 0, 2, 4, 2, 2))
print(point_inside_triangle(0, 0, 4, 0, 2, 4, 4, 4))