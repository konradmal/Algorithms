#O(n*m)
def contains_pattern(text: str, pattern: str) -> bool:
    return pattern in text

print(contains_pattern("environment", "men"))
print(contains_pattern("history", "story"))
print(contains_pattern("teacher", "each"))

#O(n*m)
def contains_pattern_basic(text: str, pattern: str) -> bool:
    for i in range(len(text) - len(pattern) + 1):
        match = True
        for j in range(len(pattern)):
            if text[i + j] != pattern[j]:
                match = False
                break
        if match:
            return True
    return False

print(contains_pattern_basic("environment", "men"))
print(contains_pattern_basic("history", "story"))
print(contains_pattern_basic("teacher", "each"))