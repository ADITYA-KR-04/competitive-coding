def sumDigits(n):
    if n == 0:
        print 0
    else:
        print n%10 + sumDigits(n/10)
sumDigits(35)