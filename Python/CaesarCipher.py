def caesar_cipher(text: str, key: int) -> str:
    result = ""
    for char in text:
        if 'A' <= char <= 'Z':
            result += chr((ord(char) + key - ord('A')) % 26 + ord('A'))
        elif 'a' <= char <= 'z':
            result += chr((ord(char) + key - ord('a')) % 26 + ord('a'))
        else:
            result += char
    return result

print(caesar_cipher("ABCXYZabcxyz Cat!Dog^Mouse.", -3))
print(caesar_cipher("ABCXYZabcxyz Cat!Dog^Mouse.", -29))
print(caesar_cipher("ABCXYZabcxyz Cat!Dog^Mouse.", 3))
print(caesar_cipher("ABCXYZabcxyz Cat!Dog^Mouse.", 29))

def caesar_decipher(text: str, key: int) -> str:
    return caesar_cipher(text, -key)

print(caesar_decipher("XYZUVWxyzuvw Zxq!Ald^Jlrpb.", -3))
print(caesar_decipher("XYZUVWxyzuvw Zxq!Ald^Jlrpb.", -29))
print(caesar_decipher("DEFABCdefabc Fdw!Grj^Prxvh.", 3))
print(caesar_decipher("DEFABCdefabc Fdw!Grj^Prxvh.", 29))