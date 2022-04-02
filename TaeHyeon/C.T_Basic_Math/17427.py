# 시간초과
def fx(num):
    global cnt
    yaksu=[]
    for i in range(1,num//2+1):
        if num%i==0:
            yaksu.append(i)
            yaksu.append(num//i)
    cnt+=sum(list(set(yaksu)))
global cnt
cnt=1
n=int(input())
for i in range(2,n+1):
    fx(i)
print(cnt)