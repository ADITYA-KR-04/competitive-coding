# def getSum(n): 
    
#     sum = 0
#     for digit in str(n):  
#       sum += int(digit)       
#     return sum
   
# n=int(input())
# print(getSum(n))

def sumDigits(n):
    if n == 0:
        print 0
    else:
        print n%10 + sumDigits(n/10)
sumDigits(35)