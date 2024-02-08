x=int(input("Enter the value of x: "))

match x:
    case 0:
        print("x is a whole number")
    case _ if x<0:
        print("x is a negative integer")
    case _ :
        print("x is a natural number")