amount = float(input("Enter purchase amount: "))

if amount < 2000:
    discount = 0
elif amount < 5000:
    discount = 5 / 100
else:
    discount = 0.08

final_amount = amount - (amount * discount)
print(f"Final bill amount: Rs.{final_amount:.2f}")
