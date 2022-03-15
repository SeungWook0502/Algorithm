def deongchi(member):
    for i in member:
        rank=1
        for j in member:
            if i[0]<j[0] and i[1]<j[1]: # 전수 조사를 하며 몸무게와 키가 모두 비교대상보다 작을 때
                rank+=1 # rank+=1
        print(rank,end=' ')
n=int(input())
member=[]
for _ in range(n):
    x,y=map(int,input().split())
    member.append([x,y])
deongchi(member)