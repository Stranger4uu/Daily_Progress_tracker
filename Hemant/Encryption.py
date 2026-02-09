import random 
import string

chars = " " + string.ascii_letters + string.digits + string.punctuation
chars = list(chars)
key = chars.copy()
random.shuffle(key)

#ENCRYPT

plain_text = input("Enter your text to encrypt : ")
sipher_text = ""

for letter in plain_text:
    index = chars.index(letter)
    sipher_text += key[index]

print(f" Original text :  {plain_text}")
print(f"Encrypted text :  {sipher_text}") 

#DECRYPT

print("\n")
print("---------------------------")
print("\n")
sipher_text = input("Enter your text to decrypt : ")
plain_text = ""

for letter in sipher_text:
    index = key.index(letter)
    plain_text += chars[index]

print(f"Encrypted text :  {sipher_text}") 
print(f" Original text :  {plain_text}")