# Take two lists, a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89], b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] and write a program that returns a list that contains only the elements that are common between the lists(without duplicates).
# Make sure your program works on two lists of different sizes. Write this in one line of Python using at least one list comprehension

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
a = (set(a))
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
b = (set(b))

ans = a & b
print(str(ans))

print("\n20DCE019 - Yatharth Chauhan")
