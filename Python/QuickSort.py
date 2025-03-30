#O(n)
def partition(tab: list, l: int, p: int) -> int:
    pivot = tab[p]
    i = l - 1
    for j in range(l, p):
        if tab[j] < pivot:
            i += 1
            tab[i], tab[j] = tab[j], tab[i]
    tab[i+1], tab[p] = tab[p], tab[i+1]
    return i + 1

#O(nlogn)
def quick_sort(tab: list, l: int, p: int):
    if l < p:
        pivot = partition(tab, l, p)
        quick_sort(tab, l, pivot-1)
        quick_sort(tab, pivot+1, p)

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
quick_sort(tab, 0, len(tab) - 1)
print("After sort:", tab)