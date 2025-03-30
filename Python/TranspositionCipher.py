#O(n)
def transposition_cipher(text: str) -> str:
    text_as_list = list(text)
    for i in range(0, len(text_as_list) - 1, 2):
        text_as_list[i], text_as_list[i + 1] = text_as_list[i + 1], text_as_list[i]
    return "".join(text_as_list)

print(transposition_cipher("COMPUTER"))
print(transposition_cipher("PHONE"))