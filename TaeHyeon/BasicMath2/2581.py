#시간초과 실패(211118)
m=int(input())
n=int(input())
sosu=[]
for num in range(m,n+1):
    if num==1:
        continue
    for j in range(2,num):
        if num%j==0:
            break
    else:
        sosu.append(num)
if not sosu:
    print(-1)
else:
    print(sum(sosu))
    print(min(sosu))