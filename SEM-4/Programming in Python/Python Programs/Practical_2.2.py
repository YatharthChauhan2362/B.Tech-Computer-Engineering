# Create a program that asks the user for a number and then prints out a list of all the divisors of that number.
# (If you don’t know what a divisor is, it is a number that divides evenly into another number. For example, 13 is a divisor of 26 because 26 / 13 has no remainder.)

n = int(input("Enter the Number: "))
print("The divisors of the number are:")
ans = []
i = 1
for i in range(i, n + 1):

    if(n % i == 0):
        ans.append(i)
print(ans)

print("\n20DCE019 - Yatharth Chauhan")
