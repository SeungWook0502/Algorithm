#시간초과 실패(211118)
m=int(input())
n=int(input())
sosu=[]
for num in range(m,n+1):
    arr=[]
    for i in range(1,num):
        arr.append(num%i)
    if arr.count(0)==1:
        sosu.append(num)
if not sosu:
    print(-1)
else:
    print(sum(sosu))
    print(min(sosu))