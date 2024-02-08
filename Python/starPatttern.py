def fn(n):
    s=""
    for i in range(n):
        for j in range(n):
            if (i==0 or i==n):
                s+="*"
            elif (i!=1 and i!=n) and (j==1 or j==n):
                s+="*"
            else:
                s+=" "
        s+="\n"
    return s
n=int(input())
print(fn(n))