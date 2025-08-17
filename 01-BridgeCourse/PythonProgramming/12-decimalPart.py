num = input("Enter a float number : ")
# real_num = float(int(num))
# round(num,3)
# ans = round(num - real_num,3)

ans = num.split(".")[-1] #updated without any round()
print(ans)


