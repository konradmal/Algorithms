def partition(tab, l, p):
    pivot = tab[p]
    i = l - 1
    for j in range(l, p):
        if tab[j] < pivot:
            i += 1
            tab[i], tab[j] = tab[j], tab[i]
    tab[i+1], tab[p] = tab[p], tab[i+1]
    return i + 1

def quick_sort(tab, l, p):
    if l < p:
        pivot = partition(tab, l, p)
        quick_sort(tab, l, pivot-1)
        quick_sort(tab, pivot+1, p)

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
quick_sort(tab, 0, len(tab) - 1)
print("After sort:", tab)