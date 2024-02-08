def bubble_sort(tab: list) -> None:
    for i in range(len(tab)):
        for j in range(len(tab) - i - 1):
            if tab[j] > tab[j + 1]:
                tab[j], tab[j + 1] = tab[j + 1], tab[j]

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
bubble_sort(tab)
print("After sort:", tab)