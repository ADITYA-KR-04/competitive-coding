n=int(input("Enter the number: "))

def pattern(n):
    s=""
    for i in range(n+1):
        for j in range(n-i):
            s+=" "
        for j in range(i+1):
            if j==i:
                s+="*"+"\n"
            else:
                s+="* "
    for i in range(n):
        for j in range(i+1):
            s+=" "
        for j in range(n-i):
            if j==(n-(i+1)):
                s+="*"+"\n"
            else:
                s+="* "
    return s

print(pattern(n))
