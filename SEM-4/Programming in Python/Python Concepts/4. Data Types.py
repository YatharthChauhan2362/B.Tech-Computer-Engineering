# Coder: Yatharth Chauhan

# Built-in Data Types

# Variables can store data of different types, and different types can do different things.

# Text Type: str
# Numeric Types: int, float, complex
# Sequence Types: list, tuple, range
# Mapping Type:	dict
# Set Types: set, frozenset
# Boolean Type:	bool
# Binary Types:	bytes, bytearray, memoryview


# You can get the data type of any object by using the type() function:
print("Get the data type")
x = 23
print(type(x))


# Example	Data Type	Try it
x = str("Hello World")	                        # str
x = int(20)	                                    # int
x = float(20.5)	                                # float
x = complex(1j)	                                # complex
x = list(["apple", "banana", "cherry"])	        # list
x = tuple(("apple", "banana", "cherry"))	    # tuple
x = range(6)	                                # range
x = dict({"name": "Yatharth", "age": 36})	    # dict
x = set({"apple", "banana", "cherry"})	        # set
x = frozenset({"apple", "banana", "cherry"})    # frozenset
x = bool(23)                                    # True
x = bytes(5)                                    # bytes
x = bytearray(5)                                # bytearray
x = memoryview(bytes(5))	                    # memoryview
