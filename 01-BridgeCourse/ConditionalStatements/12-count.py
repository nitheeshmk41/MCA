a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

count = []

for x in range(a, b+1):
    if x % c == 0:
        count.append(x)

print(f"Count: {len(count)}")
