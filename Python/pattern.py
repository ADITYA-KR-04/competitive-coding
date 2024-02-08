def pattern(n):
    if(n==1):
        return "111"
    else:
        return str(n)+pattern(n-1)+str(n)+pattern(n-1)+str(n)
    
print(pattern(int(input("Enter a number "))))