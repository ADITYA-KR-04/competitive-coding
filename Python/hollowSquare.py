n=int(input("Enter the value of edge of square: "))

def pattern(n):
    s=""
    for i in range(n):
        if i==0:
            s+=(n-1)*"* "+"\n"
        elif i==(n-1):
            s+=(n-1)*"* "
        else:
            for j in range(n-1):
                if j==0:
                    s+="* "
                elif(j==(n-2)):
                    s+="*\n"
                else:
                    s+="  "
    return s
print(pattern(n))
        
        