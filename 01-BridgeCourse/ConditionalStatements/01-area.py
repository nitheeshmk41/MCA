shape = input("Enter 'S' for Square or 'C' for Circle: ").upper()

if shape == 'S':
    side = float(input("Enter side length: "))
    area = side ** 2
    print("Area of Square:", area)
elif shape == 'C':
    radius = float(input("Enter radius: "))
    pi = 3.14159
    area = pi * (radius ** 2.0)
    print("Area of Circle:", area)
else:
    print("Invalid input")
