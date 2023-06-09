a=0
b=1
n=input("No. of numbers you want\n")
n=int(n)
r=0
while r<n:
    print(a)
    temp=a
    a=b
    b=temp+b
    r=r+1
    
