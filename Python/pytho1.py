num=int(input("Enter your number: "))

for i in range(2,num):
    if num%i==0:
        print("Composite number")
        break
    elif num==1:
        print
else:
    print("Prime number")