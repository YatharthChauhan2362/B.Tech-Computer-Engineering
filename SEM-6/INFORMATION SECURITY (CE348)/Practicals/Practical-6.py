import random


def encrypt(message, key):
    # Convert the message and key to binary
    message_bin = ''.join([bin(ord(c))[2:].zfill(8) for c in message])
    key_bin = ''.join([bin(ord(c))[2:].zfill(8) for c in key])

    # XOR the message and key
    cipher_bin = ''
    for i in range(len(message_bin)):
        cipher_bin += str(int(message_bin[i]) ^ int(key_bin[i % len(key_bin)]))

    # Convert the cipher back to a string
    cipher = ''
    for i in range(0, len(cipher_bin), 8):
        cipher += chr(int(cipher_bin[i:i+8], 2))

    return cipher


def decrypt(cipher, key):
    # Convert the cipher and key to binary
    cipher_bin = ''.join([bin(ord(c))[2:].zfill(8) for c in cipher])
    key_bin = ''.join([bin(ord(c))[2:].zfill(8) for c in key])

    # XOR the cipher and key
    message_bin = ''
    for i in range(len(cipher_bin)):
        message_bin += str(int(cipher_bin[i]) ^ int(key_bin[i % len(key_bin)]))

    # Convert the message back to a string
    message = ''
    for i in range(0, len(message_bin), 8):
        message += chr(int(message_bin[i:i+8], 2))

    return message


# Establish a connection with Bruce Wayne and agree on a shared secret
secret = 'mysecret'

# Generate a random key using the shared secret as input to the random number generator
key = ''.join([chr(random.randint(ord('A'), ord('Z')))
              for _ in range(len(secret))])

# Encrypt and decrypt a message using the key
message = "hello"
cipher = encrypt(message, key)
decrypted_message = decrypt(cipher, key)

print(f'Original message: {message}')
print(f'Encrypted message: {cipher}')
print(f'Decrypted message: {decrypted_message}')
print(f'key used: {key}')
