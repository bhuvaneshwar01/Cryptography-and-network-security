
alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

def encryption(plain_text,key):
    cipher_text = ''

    for i in range(len(plain_text)):
        char = plain_text[i]
        # print(char)
        if char.isupper():
            index = alphabet.index(char.upper())
            cipher_text += alphabet[(index+key)%26].upper()
        elif char.islower():
            index = alphabet.index(char.upper())
            cipher_text += alphabet[(index+key)%26].lower()
        else:
            cipher_text += char
    return cipher_text

plain_text = input("Enter plain text : ")
key = int(input("Enter key : "))
print(encryption(plain_text,key))
        