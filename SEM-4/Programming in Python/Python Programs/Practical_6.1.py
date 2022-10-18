# Write a program using a function to check whether the number is prime or not. (A prime number is a number that has no divisors.)

num = int(input("Enter the number: "))

if num > 1:

    for i in range(2, int(num/2)+1):

        if (num % i) == 0:
            print(num, "is not a prime number")
            break
    else:
        print(num, "is a prime number")

else:
    print(num, "is not a prime number")

print("\n20DCE019 - Yatharth Chauhan")
