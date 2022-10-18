# Write a program by asking the user for a string and print out whether this string is a palindrome or not. (A palindrome is a string that reads the same forwards and backwards.)

string = input(("Enter a string: "))

if(string == string[::-1]):
    print("String is a palindrome")
else:
    print("String is not a palindrome")

print("\n20DCE019 - Yatharth Chauhan")
