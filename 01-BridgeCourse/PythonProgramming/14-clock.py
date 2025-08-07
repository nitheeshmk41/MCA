N = int(input("Number of Minutes : "))

if(N < 1440):
    num_of_hrs = N // 60
    num_of_mins = N % 60
    print("Time is :", num_of_hrs ,num_of_mins)
else:
    print("Above 24HRS")