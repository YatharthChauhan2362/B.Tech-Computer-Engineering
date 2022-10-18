# Write a program that takes a list of numbers (for example, a = [5, 10, 15, 20, 25]) and makes a new list of only the first and last elements of the given list. For practice, write this code inside a function.

def first_last(a):
    newlist = []
    newlist.append(a[0])
    newlist.append(a[-1])

    print("First and last Elements of the list are: ", a[-1])
    return newlist


a = []
num = int(input("Enter number of elements: "))

for i in range(0, num):
    element = int(input())
    a.append(element)

first_last(a)

print("\n20DCE019 - Yatharth Chauhan")
