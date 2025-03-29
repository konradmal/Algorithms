#O(n^2)
def insertion_sort(arr: list) -> None:
    for i in range(1, len(arr)):
        key = arr[i]
        j = i
        while j > 0 and arr[j - 1] > key:
            arr[j] = arr[j - 1]
            j -= 1
        arr[j] = key

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
insertion_sort(tab)
print("After sort:", tab)