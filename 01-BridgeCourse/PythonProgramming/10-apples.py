num_students = int(input("Enter number of students : "))
num_apples = int(input("Enter number of apples : "))

equal_dis = num_apples // num_students
remainings = num_apples % num_students

print("Distributed for each -> ", equal_dis)
print("Remaing apples -> ", remainings)