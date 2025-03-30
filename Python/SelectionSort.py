#O(n^2)
def selection_sort(tab: list) -> None:
    for i in range(len(tab)):
        mini = i
        for j in range(i + 1, len(tab)):
            if tab[mini] > tab[j]:
                mini = j
        tab[i], tab[mini] = tab[mini], tab[i]

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
selection_sort(tab)
print("After sort:", tab)