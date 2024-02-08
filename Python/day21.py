def average(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i
    print("Average is: ", sum /len(numbers))

c=average(1,2)
