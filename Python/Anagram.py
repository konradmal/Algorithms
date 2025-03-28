#O(nlogn)
def is_anagram(str1: str, str2: str) -> bool:
    return sorted(str1) == sorted(str2)

print(is_anagram("listen", "silent"))
print(is_anagram("angel", "glean"))
print(is_anagram("brags", "grabs"))

#O(n^2)
def bubble_sort_string(string: str) -> str:
    characters = list(string)
    for i in range(len(characters)):
        for j in range(len(characters) - 1 - i):
            if characters[j] > characters[j + 1]:
                characters[j], characters[j + 1] = characters[j + 1], characters[j]
    return ''.join(characters)

#O(n^2)
def is_anagram_bubble_sort(str1: str, str2: str) -> bool:
    return bubble_sort_string(str1) == bubble_sort_string(str2)

print(is_anagram_bubble_sort("listen", "silent"))
print(is_anagram_bubble_sort("angel", "glean"))
print(is_anagram_bubble_sort("brags", "grabs"))

#O(n)
def is_anagram_count(str1: str, str2: str) -> bool:
    char_count = [0]*128
    if len(str1) != len(str2):
        return False
    for i in range(len(str1)):
        char_count[ord(str1[i])]+=1
        char_count[ord(str2[i])]-=1
    for count in char_count:
        if count:
            return False
    return True

print(is_anagram_count("listen", "silent"))
print(is_anagram_count("angel", "glean"))
print(is_anagram_count("brags", "grabs"))