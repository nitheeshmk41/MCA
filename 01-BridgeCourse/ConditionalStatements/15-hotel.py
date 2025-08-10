people = int(input("Enter number of people: "))
company_business = input("Staying for company business? (y/n): ").lower()
age = int(input("Enter age of customer: "))

if people == 2:
    cost = 5000
elif people == 3:
    cost = 6000
elif people == 4:
    cost = 7000
else:
    cost = 7000 + (people - 4) * 500

if company_business == 'y':
    cost *= 0.8

if age > 60:
    cost *= 0.85

print(f"Total cost: Rs.{cost:.2f}")
