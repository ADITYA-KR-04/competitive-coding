n=int(input("Enter the number of columns: "))
import math
def nCr(n,r):
    ans=(math.factorial(n))//((math.factorial(r))*(math.factorial(n-r)))
    return ans

def pattern(n):
    s=""
    for i in range(n):
        for j in range(n-(i+1)):
            s+=" "
        for j in range(i+1):
            if j==i:
                s+=str(nCr(i,j))+"\n"
            else:
                s+=str(nCr(i,j))+" "
    return s
print(pattern(n))


