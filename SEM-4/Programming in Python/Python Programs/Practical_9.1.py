pi = 3.14


class Circle():

    def __init__(self, r):
        self. radius = r

    def area(self):
        return self.radius**2*pi

    def peri(self):
        return self.radius*pi*2


NewCircle = Circle(24)

print(NewCircle.area())
print(NewCircle.peri())

print("\n20DCE019 - Yatharth Chauhan")
