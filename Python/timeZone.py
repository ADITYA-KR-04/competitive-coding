import time
t= time.strftime('%H:%M:%S')
a=int(time.strftime('%H'))
if (a<12 and a>0):
    print("Good Morning Sir!")
elif (a>=12 and a<17):
    print("Good Afternoon Sir!")
else:
    print("Good Evening Sir!")
