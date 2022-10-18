# Write a program (function!) that takes a list and returns a new list that contains all the elements of the first 1,2 list minus all the duplicates.

def dedupe_v1(x):
    y = []
    for i in x:
        if i not in y:
            y.append(i)
    return y


a = [2, 3, 3, 2, 5, 6, 7, 8, 5, 6]
print("Original list", a)
print("Duplicate list", dedupe_v1(a))

print("\n20DCE019 - Yatharth Chauhan")
