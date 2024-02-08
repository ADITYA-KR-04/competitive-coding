def pat(n):
    s=""
    for i in range(0,n):
        for j in range(1,i):
            if j!=(i-1):
                s+="\n"
            else:
                s+=str(j)
    return s
    
print(pat(5))
