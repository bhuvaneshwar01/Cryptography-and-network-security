from audioop import reverse


LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

def frequency_analysis(cipher_text):
    cipher_text = cipher_text.upper()

    letter_frequency = {}
    
    for i in LETTERS:
        letter_frequency[i] = 0;
    
    for i in cipher_text:
        if i in LETTERS:
            letter_frequency[i] += 1
    
    return letter_frequency

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

def caeser_crack(cipher_text):
    letter_frequency = frequency_analysis(cipher_text)
    print(letter_frequency)
    
    letter_frequency = {k: v for k, v in sorted(letter_frequency.items(), key=lambda item: item[1],reverse=True)}
   
    for x,y in letter_frequency.items():
        if y != 0:
            index_l = LETTERS.index(x)
            index_e = LETTERS.index('E')

            key = (index_l - index_e)%26
            print("\n[+]\tMOST FRQUENCE LETTER : " ,x,"\tKEY : ",key)
            print(decryption(cipher_text,key)) 
            print("\n-------------------------------------\n")
    


cipher_text = input("Enter cipher text : ")
print(cipher_text)
caeser_crack(cipher_text)