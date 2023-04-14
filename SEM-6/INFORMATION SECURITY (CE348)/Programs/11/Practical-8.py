e1,d1,n1 = 5,29,91

#assuming the public & private key for anarkali

message_1 = int(input("Enter Anarkali's Message : "))

#encrypt
def encrypt(msg):
#encrypting with 1's private key
    return pow(msg, d1, n1)
    
#decrypt
def decrypt(cipher):
#decrypting with 1's public key
    return pow(cipher, e1, n1)
cipher = encrypt(message_1)
print(f"Cipher Text : {cipher}")
pt = decrypt(cipher)
if message_1 == pt:
    print("Message Verified!")
print(f"Plain Text : {pt}")
print("20DCE021 -- Yug Dave")
