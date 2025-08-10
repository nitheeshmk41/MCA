maths = int(input("Maths marks: "))
physics = int(input("Physics marks: "))
chemistry = int(input("Chemistry marks: "))

total_all = maths + physics + chemistry
total_mp = maths + physics

if (maths >= 60 and physics >= 50 and chemistry >= 40 and 
    (total_all >= 200 or total_mp >= 150)):
    print("Eligible for admission")
else:
    print("Not eligible for admission")
