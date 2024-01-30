def min_max(values: list) -> tuple:
    min_value = values[0]
    max_value = values[0]
    for value in values:
        if value > max_value:
            max_value = value
        if value < min_value:
            min_value = value
    return (min_value, max_value)

# Przykład użycia
numbers = [22, 34, 12, 9, 55, 33, 23]
print("Minimum:", min_max(numbers)[0], "Maximum:", min_max(numbers)[1])
