ph = int(input("Enter the pH value : "))

if(ph > 7):
    if(ph < 12):
        print("Alkaline")
    else:
        print("Very Alkaline")
else:
    if(ph == 7):
        print("Neutral")
    elif(ph > 2):
        print("Acidic")
    else:
        print("Verry acidic")