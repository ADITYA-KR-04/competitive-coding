n=int(input("Enter the number of columns: "))

def pattern(n):
    s=""
    k=1
    for i in range(n):
        for j in range(i+1):
            if j==i:
                s+=str(k)+"\n"
            else:
              s+=str(k)+" "
            k+=1
        
    return s
print(pattern(n))
  
       