def merge(arr: list, left: int, mid: int, right: int):
    temp = [0] * (right + 1)
    i, j = left, mid + 1
    for k in range(left, right + 1):
        temp[k] = arr[k]
    for k in range(left, right + 1):
        if i > mid:
            arr[k] = temp[j]
            j += 1
        elif j > right:
            arr[k] = temp[i]
            i += 1
        elif temp[j] < temp[i]:
            arr[k] = temp[j]
            j += 1
        else:
            arr[k] = temp[i]
            i += 1

def merge_sort(arr: list, left: int, right: int):
    if left < right:
        mid = (left + right) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

tab = [3, 10, 77, 99, 2, 8, 17]
print("Before sort:", tab)
merge_sort(tab, 0, len(tab) - 1)
print("After sort:", tab)