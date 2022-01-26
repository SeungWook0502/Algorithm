n=int(input())
arr=list(map(int,input().split()))
cnt=0
for i in arr:
    sosu=[]
    for j in range(1,i):
        sosu.append(i%j)
    if sosu.count(0)==1:
        cnt+=1
print(cnt)