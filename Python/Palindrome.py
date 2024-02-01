def is_palindrome(word: str) -> bool:
    return word == word[::-1]

print(is_palindrome("radar"))
print(is_palindrome("racecar"))
print(is_palindrome("rotator"))

def is_palindrome_iterative(word: str) -> bool:
    start = 0
    end = len(word) - 1
    while start < end:
        if word[start] != word[end]:
            return False
        start += 1
        end -= 1
    return True

print(is_palindrome_iterative("radar"))
print(is_palindrome_iterative("racecar"))
print(is_palindrome_iterative("rotator"))

def is_palindrome_recursive(word: str, start: int, end: int) -> bool:
    if start >= end:
        return True
    if word[start] != word[end]:
        return False
    return is_palindrome_recursive(word, start + 1, end - 1)

print(is_palindrome_recursive("radar", 0, len("radar") - 1))
print(is_palindrome_recursive("racecar", 0, len("racecar") - 1))
print(is_palindrome_recursive("rotator", 0, len("rotator") - 1))

def is_palindrome_recursive_simple(word: str) -> bool:
    if len(word) <= 1:
        return True
    if word[0] != word[-1]:
        return False
    return is_palindrome_recursive_simple(word[1:-1])

print(is_palindrome_recursive_simple("radar"))
print(is_palindrome_recursive_simple("racecar"))
print(is_palindrome_recursive_simple("rotator"))
