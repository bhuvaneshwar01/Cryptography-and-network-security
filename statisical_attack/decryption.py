LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

def decryption(cipher_text,key):
    plain_text = ''

    for i in range(len(cipher_text)):
        char = cipher_text[i]
        
        if char.isupper():
            index = LETTERS.index(char.upper())
            plain_text += LETTERS[(index-key)%26].upper()
        elif char.islower():
            index = LETTERS.index(char.upper())
            plain_text += LETTERS[(index-key)%26].lower()
        else:
            plain_text += char
    
    return plain_text

cipher_text = input("Enter cipher text : ")
key = int(input("Enter key : "))
print(decryption(cipher_text,key))