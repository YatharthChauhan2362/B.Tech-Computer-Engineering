# Coder: Yatharth Chauhan

# Variables
# Variables are containers for storing data values.


# Creating Variables
# A variable is created the moment you first assign a value to it.
from re import I
from tkinter import N


x = 23
y = "Yatharth Chauhan"

# Casting
# If you want to specify the data type of a variable, this can be done with casting.
print("\nCasting")
a = str(1)    # x will be '3'
b = int(1)    # y will be 3
c = float(1)  # z will be 3.0
print(a)
print(b)
print(c)


# Get the Type
# You can get the data type of a variable with the type() function.
print("\nGetting the Type")
x = 23
y = "Yatharth Chauhan"
print(type(x))
print(type(y))


# Single or Double Quotes?
# String variables can be declared either by using single or double quotes:
print("\nSingle or Double Quotes Both are Same")
d = "Yatharth Chauhan"
# is the same as
D = 'Yatharth Chauhan'
print(d)
print(D)

# Case-Sensitive
# Variable names are case-sensitive.
print("\nCase-Sensitive")
e = 4
E = "Yatharth Chauhan"
print(e)
print(E)
# A will not overwrite a


# Many Values to Multiple Variables
# Python allows you to assign values to multiple variables in one line:
print("\nMultiple Values to Multiple Variables")
f, g, h = "Yatharth", "Riya", "Sujal"
print(f)
print(g)
print(h)

# One Value to Multiple Variables
# And you can assign the same value to multiple variables in one line:
print("\nOne Value to Multiple Variables")
i = j = k = "CHARUSAT"
print(i)
print(j)
print(k)


# Unpack a Collection
# If you have a collection of values in a list, tuple etc. Python allows you to extract the values into variables. This is called unpacking.
print("\nUnpack a Collection")
Name = ["Yatharth", "Riya", "Sujal"]
l, m, n = Name
print(l)
print(m)
print(n)


# Output Variables
# The Python print() function is often used to output variables.
print("\nOutput Variables")
p = "Python"
q = "is"
r = "awesome"
print(p, q, r)


# You can also use the + operator to output multiple variables:
print("\nMathematical Operator")
print(p + q + r)
# Notice the space character after "Python " and "is ", without them the result would be "Pythonisawesome".


# For numbers, the + character works as a mathematical operator:
s = 2
t = 3
print(s + t)


# In the print() function, when you try to combine a string and a number with the + operator, Python will give you an error:
# print("\nprint() Function")
# u = 18
# v = "Yatharth"
# print(u + v)  # error message


# The best way to output multiple variables in the print() function is to separate them with commas, which even support different data types:
u = 18
v = "Yatharth"
print(u, v)


# Global Variables
# Variables that are created outside of a function(as in all of the examples above) are known as global variables.

# Global variables can be used by everyone, both inside of functions and outside.

# Create a variable outside of a function, and use it inside the function
print("\nCreate a variable outside of a function")
x = "awesome"


def myfunc():
    print("Python is " + x)


myfunc()

# If you create a variable with the same name inside a function, this variable will be local, and can only be used inside the function. The global variable with the same name will remain as it was, global and with the original value.

# Create a variable inside a function, with the same name as the global variable
print("\nCreate a variable inside of a function")
x = "awesome"


def myfunc():
    x = "fantastic"
    print("Python is " + x)


myfunc()


# The global Keyword

# Normally, when you create a variable inside a function, that variable is local, and can only be used inside that function.

# To create a global variable inside a function, you can use the global keyword.
print("\nglobal keyword inside the function")


def myfunc():
    global x
    x = "Superious"


myfunc()

print("Python is " + x)

# To change the value of a global variable inside a function, refer to the variable by using the global keyword:
print("\nChenge the global keyword inside the function")

x = "awesome"


def myfunc():
    global x
    x = "Faboulious"


myfunc()

print("Python is " + x)
