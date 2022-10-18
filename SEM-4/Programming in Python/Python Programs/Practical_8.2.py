import string
import random

a = int(input("Enter Length of password: "))
all = string.ascii_lowercase+string.ascii_uppercase + \
    string.digits+string.punctuation


def passwordGen(size):
    return ''.join(random.choice(all) for _ in range(size))


print(passwordGen(a))

print("\n20DCE019 - Yatharth Chauhan")
