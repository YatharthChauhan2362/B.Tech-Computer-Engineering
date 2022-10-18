# # Write a program that asks the user how many Fibonacci numbers to generate and then generates them. Take 2 1,2 this opportunity to think about how you can use functions. Make sure to ask the user to enter the number of
# numbers in the sequence to generate. (Hint: The Fibonacci sequence is a sequence of numbers where the next
#                                       number in the sequence is the sum of the previous two numbers in the sequence. The sequence looks like this: 1,
#                                       1, 2, 3, 5, 8, 13, ...)

def FibonacciNum(n):
    n1 = 0
    n2 = 1

    if (n < 1):
        return

    print(n1, end=" ")

    for i in range(1, n):
        print(n2, end=" ")

        sum = n1 + n2
        n1 = n2
        n2 = sum


FibonacciNum(int(input("Enter the range: ")))

print("\n\n20DCE019 - Yatharth Chauhan")
