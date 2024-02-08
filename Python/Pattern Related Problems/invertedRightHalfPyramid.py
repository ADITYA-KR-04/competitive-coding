n=int(input("Enter the number: "))

def pattern(n):
    s=""
    for i in range(n):
        for j in range(n-i):
            if j<(n-(i+1)):
                s+="*"
            else:
                s+="*"+"\n"
    
    return s

print(pattern(n))