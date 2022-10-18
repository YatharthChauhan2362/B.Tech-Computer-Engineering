# Create a program that asks the user to enter their name and their age.
# Printout a message addressed to them that tells them the year that they will turn 100 years old.

import datetime

name = input("Enter your Name: ")
age = int(input("Enter your Age: "))

date = datetime.datetime.now()
temp = 100 - age
update = temp + date.year

print("After 100 years: ", update)

print("\n20DCE019 - Yatharth Chauhan")
