rad = float(input("Enter radius : "))

x = int(input("Enter x coordinate : "))
y = int(input("Enter y coordinate : "))

if(x < rad and x > -rad) and (y < rad and y > -rad):
    print("It hit the DART!")
else:
    print("It NOT hit the dart")