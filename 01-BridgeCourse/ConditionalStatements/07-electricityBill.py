prev = int(input("Previous meter reading: "))
curr = int(input("Current meter reading: "))
units = curr - prev

bill = 0
fixed = 0

if units <= 100:
    fixed = 0
elif units <= 200:
    fixed = 20
    bill = (units - 100) * 2
elif units <= 500:
    fixed = 30
    bill = (100 * 2) + ((units - 200) * 3)
else:
    fixed = 50
    bill = (100 * 3.5) + (300 * 4.6) + ((units - 500) * 6.6)

total = fixed + bill
print(f"Total bill: Rs.{total:.2f}")
