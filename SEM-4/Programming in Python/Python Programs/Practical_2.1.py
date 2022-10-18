# Write a program as mentioned below
# Take a list, a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89], and write a program that print out all the elements of the list that are less than 5.

list = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]

for i in range(len(list)):

    if(list[i] < 5):

        print(list[i], end=" ")

print("\n20DCE019 - Yatharth Chauhan")
