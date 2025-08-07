n = int(input("Enter num : "))

print(n + (n**2) + (n**3))


times_to_run = int(input("How many times to run : ")) #5 - > n^1, n^2, n^3, n^4,n^5

start = 1
ans = 0
while(start <= times_to_run):
    ans += n**start
    start += 1

print("Answer : ", ans)
