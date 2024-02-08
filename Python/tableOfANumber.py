a=int(input("Enter the number: "))
print("Table of ",a," is:-")
for i in range(1,13):
    if(i==11):
        print("Skip the iteration")
        continue
    print(a,"X",i,"=",a*i)
    i=i+1