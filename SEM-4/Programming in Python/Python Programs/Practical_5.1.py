# Write a program to generate a random number between 1 and 9 (including 1 and 9). Ask the user to guess the
# number, then tell them whether they guessed too low, too high, or exactly right. (Hint: remember to use the user
# Write a program to generate a random number between 1 and 9 (including 1 and 9). Ask the user to guess the
# number, then tell them whether they guessed too low, too high, or exactly right. (Hint: remember to use the user

from random import randrange

a = int(input("Enter user defined number: "))
rd = int(input("Random Number: "))

if(a > rd):
    print("It's a high number.")
elif(a < rd):
    print("It's a low number.")
else:
    print("Exactly Same")

print("\n20DCE019 - Yatharth Chauhan")
