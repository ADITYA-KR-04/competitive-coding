n=int(input("Enter the number: "))

def pattern(n):
    s=""
    for i in range(n+1):
        for j in range(i):
            if j<(i-1):
                s+="*"
            else:
                s+="*"+"\n"

            
    return s

print(pattern(n))

