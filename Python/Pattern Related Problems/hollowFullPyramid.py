n=int(input("Enter the number: "))

def pattern(n):
    s=""
    for i in range(n):
        if i!=(n-1) and i!=0:
             for j in range(n-(i+1)):
                s+=" "
             for j in range(2*i+1):
                 if i!=0:
                     if j==0:
                        s+="*"
                     elif(j==2*i):
                        s+="*"+"\n"
                     else:
                         s+=" "
                 else:
                     if j==0:
                         s+="*"
                     else:
                         s+="\n"
        elif(i==0):
            s+=(n-1)*" "+"*"+"\n"
        else:
            s+=n*"* "
    return s
print(pattern(n))
       