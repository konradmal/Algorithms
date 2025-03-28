#O(logn)
def binary_search_iterative(arr: list, target: float) -> int:
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    return -1

print(binary_search_iterative([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 8.1))
print(binary_search_iterative([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 5.55))
print(binary_search_iterative([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 2.5))

#O(logn)
def binary_search_recursive(arr: list, target: float, left: int, right: int) -> int:
    if left > right:
        return -1
    mid = (left + right) // 2
    if target == arr[mid]:
        return mid
    if arr[mid] > target:
        return binary_search_recursive(arr, target, left, mid - 1)
    return binary_search_recursive(arr, target, mid + 1, right)

print(binary_search_recursive([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 8.1, 0, 9))
print(binary_search_recursive([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 5.55, 0, 9))
print(binary_search_recursive([2.2, 3.3, 4.5, 4.7, 5.11, 5.55, 6.12, 6.7, 7.5, 8.1], 2.5, 0, 9))