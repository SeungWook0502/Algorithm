def sosu(x):
    if x==1:
        return False
    for j in range(2, int(x** 0.5)+1 ): #에라토스테네스의 체
            if x%j==0:
                return False
    return True
t=int(input())
for i in range(t):
    n=int(input())
    sosu_list=[]
    a=n//2
    b=n//2
    for j in range(2,n):
        if sosu(a) and sosu(b): #입력한 수의 중앙값부터 순차적으로 올리고 내림
            print(a,b)
            break
        a-=1
        b+=1