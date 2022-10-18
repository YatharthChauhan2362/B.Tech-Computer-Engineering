a = [1, 3, 5, 30, 42, 43, 500]
q = int(input('Which Number do You want to search: '))

flag = 0
while a != []:
    mid = int(len(a)/2)

    if q == a[mid]:
        print('The list contains', q)

        flag = 1
        break

    elif q > a[mid]:
        del a[:mid+1]

    elif q < a[mid]:
        del a[mid:]

if flag == 0:
    print('The list does not contain ', q)

print("\n20DCE019 - Yatharth Chauhan")
