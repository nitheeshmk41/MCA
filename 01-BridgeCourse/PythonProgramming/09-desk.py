a_class = int(input("No of studnets in A : "))
b_class = int(input("No of studnets in B : "))
c_class = int(input("No of studnets in C : "))

total_students = a_class + b_class + c_class

needed_desk = round(total_students / 2)

print("Total needed desk -> ", needed_desk)