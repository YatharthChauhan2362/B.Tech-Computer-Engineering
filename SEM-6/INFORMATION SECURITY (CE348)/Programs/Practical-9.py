import hashlib
import random
# Writing a file
with open("hash.txt", 'w') as f:
    f.write("You can never understand everything. But, you should push yourself to understand the system! -Ryan Dahl")
with open("hash.txt", 'r') as f:
    msg_1 = f.read()
    hash = hashlib.sha1(msg_1.encode())
    # print(hash.__hash__())
def alter_msg(msg):
    r = random.randint(0, 1)
    msg_1, hash = msg
    if r:
        msg_1 += str(r)  # alter the string by 1 char at random
    print(msg_1)
    return (msg_1, hash)
def check_msg(message):
    x, y = message
    a = hashlib.sha1(str(x).encode()).hexdigest()
    b = y.hexdigest()
    if a == b:
        print("The message is not altered!")
    else:
        print("The message is altered!")
msg_o = (msg_1, hash)  # a tuple of msg along with it's hash
message = alter_msg(msg_o)  # a random function to alter the message
check_msg(message) # to check is msg is altered or not
print("20DCE019 -- Yatharth Chauhan")
