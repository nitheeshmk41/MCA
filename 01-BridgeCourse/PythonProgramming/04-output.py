num1 = 8
num2 = 6
num3 = 4

num1 += num2 + num2
print(num1)

num1 = num1 ** (num2 + num3)
print(num1)

num1 **= num2+num3
print(num1)

print(4.00 / (2.0+2.0))

num1 = 2+9*((3*12)-8)/10
print(num1)

num1 = 24 // 4 //2
print(num1)

num1 = float(10)
print(num1)

#num1 = int('3.14') #ValueError: invalid literal for int() with base 10: '3.14'
num1 = int(3.14)
print(num1)

print("BYE" == "bye")
print(10 != 9 and 20 >= 20)
print(10 + 6 * 2**2 != 9//4 - 3 and 29 >= 29/9)

print(5%10+10 < 50 and 29 <= 29)
print((0 < 6) or (not(10==6)) and (10 < 0) )