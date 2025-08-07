x1 = int(input("Enter x1: "))
x2 = int(input("Enter x2: "))
y1 = int(input("Enter y1: "))
y2 = int(input("Enter y2: "))


# Here is like to formulae explanation - https://www.geeksforgeeks.org/dsa/program-calculate-distance-two-points/

distance = ((x2 - x1)**2 + (y2 - y1)**2)**0.5

print("Distance between points:", distance)
