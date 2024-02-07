def Hanoi(n: int, A: str, B: str, C: str) -> None:
    if n > 0:
        Hanoi(n-1, A, C, B)
        print(A,"->",C)
        Hanoi(n-1, B, A, C)

Hanoi(3, "A", "B", "C")
Hanoi(4, "A", "B", "C")