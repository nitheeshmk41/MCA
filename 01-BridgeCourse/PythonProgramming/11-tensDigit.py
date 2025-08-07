num = int(input("Enter number : "))

if(num > 9 or num < -9):
    after_removing_last_digit = num // 10
    last_digit = after_removing_last_digit % 10

    print("10s digit is", last_digit)
else:
    print("Type minimum 2 digit numbers")
