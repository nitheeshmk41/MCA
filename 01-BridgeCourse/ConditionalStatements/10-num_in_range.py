divisor = int(input("Enter divisor: "))
for num in range(700, 901):
    if num % divisor == 0:
        print(num, end=' ')
