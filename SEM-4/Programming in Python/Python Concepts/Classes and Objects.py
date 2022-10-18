# Coder: Yatharth Chauhan

# Python is an object oriented programming language.
# A Class is like an object constructor, or a "blueprint" for creating objects.


# Create a Class
# To create a class, use the keyword class:
class MyClass:
    x = 23


# Create Object
# Now we can use the class named MyClass to create objects:
obj = MyClass()
print(obj.x)


# The __init__() Function

# All classes have a function called __init__(), which is always executed when the class is being initiated.
# Use the __init__() function to assign values to object properties, or other operations that are necessary to do when the object is being created:
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


p1 = Person("Yatharth", 23)

print(p1.name)
print(p1.age)
