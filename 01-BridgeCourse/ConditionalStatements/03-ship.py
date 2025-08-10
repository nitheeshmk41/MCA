code = input("Enter ship serial code: ").upper()

if code.startswith('B'):
    print("Battleship")
elif code.startswith('C'):
    print("Cruiser")
elif code.startswith('D'):
    print("Destroyer")
elif code.startswith('F'):
    print("Frigate")
else:
    print("Unknown class")
