def beaufort_cipher(text, k):
    n = len(text)
    ciphertext = ""
    i = 0
    while i < n:
        ciphertext += chr((90 - ord(text[i]) + k) % 26 + 65)
        i += 1
        k += i
    return ciphertext

text = "CAT"
print(text)
print(beaufort_cipher(text, 1))
text2 = "MOUSE"
print(text2)
print(beaufort_cipher(text2, 14))