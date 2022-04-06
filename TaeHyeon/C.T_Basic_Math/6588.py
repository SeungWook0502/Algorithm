def sosu(x):
    if x==1:
        return False
    for j in range(2, int(x** 0.5)+1 ): #에라토스테네스의 체
            if x%j==0:
                return False
    return True
while 1:
    n=int(input())
    if n==0:
        break
    sosu_list=[]
    a=1
    b=n-1
    for j in range(2,n):
        if sosu(a) and sosu(b):
            print(n,'=',a,'+',b)
            break
        a+=1
        b-=1