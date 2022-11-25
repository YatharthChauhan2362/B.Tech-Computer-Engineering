//Set
var colors: Set<String> = ["Blue", "Red", "Orange",
"Blue"]
print(colors)
colors.insert("black")
print(colors)

colors.remove("Red")
print(colors)

print(colors.contains("black")) //Return True or False