import operator

class Point(tuple):
    def __new__(self, x, y):
        return tuple.__new__(Point, (x, y))

p = Point(1, 2)
Point.x = property(operator.itemgetter(0,1))
Point.y = property(operator.itemgetter(1))
print(p.x)
print(p.y)
