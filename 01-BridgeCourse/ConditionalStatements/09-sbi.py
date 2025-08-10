age = int(input("Enter age: "))
applicant_type = input("Enter type (salaried/self-employed/student/retired): ").lower()
income = float(input("Enter annual income in Rs: "))

if 21 <= age <= 60 and applicant_type in ['salaried', 'self-employed', 'student', 'retired'] and income <= 300000:
    print("Eligible for SBI Credit Card")
elif age >= 18 and applicant_type != '' and income <= 300000:
    print("Eligible for Add-on Card")
else:
    print("Not eligible")
