import math
import datetime

#1 trapezoid area
b1 = float(input())
b2 = float(input())
h = float(input())
area = (b1 + b2) * h / 2
print('Trapezoid area is equal to: ' + str(area))

#2 perimeter and area of a circle
r = float(input())
area = math.pi * r * r
perimeter = 2 * math.pi * r
print(f"Area is equal to: {area: .2f}")
print(f"Parameter is equal to: " + str(perimeter))

#3 perimeter and area of a square
x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())
length = max(x1, x2) - min(x1, x2)
height = max(y1,y2) - min(y1, y2)
area = round(length * height, 2)
perimeter = 2 * (length + height)
print("Area is equal to: " + str(area))
print("Perimeter is equal to: " + str(perimeter))

#4 datetime
x = datetime.datetime.now()
print(x.strftime("%A"))

