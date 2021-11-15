x=int(input())
a=1
while x>a:
    x-=a
    a+=1
if a%2==0:
    print("%d/%d"%(x,1+a-x))
else:
    print("%d/%d"%(1+a-x,x))