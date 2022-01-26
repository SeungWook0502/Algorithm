n=int(input())
x=n
c=0
while True:
    a=(x//10)+(x%10)
    x=(x%10)*10+(a%10)
    c+=1
    if x==n:
        print(c)
        break;