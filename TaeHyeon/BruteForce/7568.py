def deongchi(member):
    kgRank=[]
    cmRank=[]
    for i in member:
        cnt=1
        for j in member:
            if i<j:
                cnt+=1
        kgRank.append(cnt)
    for i in member:
        cnt=1
        for j in member:
            if i[1]<j[1]:
                cnt+=1
        cmRank.append(cnt)
    return kgRank,cmRank
def rank(kg,cm):
    pass
n=int(input())
member=[]
for _ in range(n):
    x,y=map(int,input().split())
    member.append([x,y])
kg,cm=deongchi(member)
print(kg)
print(cm)
rank(kg,cm)