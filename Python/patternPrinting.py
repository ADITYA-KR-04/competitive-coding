def pattern(n):
    for i in range(n):
        if (i==0 or i==n-1):
            l=' '
            for i in range(n):
                l+='*'
            print(l)
        else:
            for j in range(n):
                l=' '
                if (j==0 and j==n-1):
                    l+='*'
                else:
                    l+=' '
                print(l)

print(pattern(int(input("Enter a number"))))