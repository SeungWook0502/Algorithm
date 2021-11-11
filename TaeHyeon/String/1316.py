n=int(input())
cnt=0
for i in range(n):
    arr1=list(input())
    arr2=[]
    ncnt=0
    if len(arr1)==1:
        cnt+=1
    else:
        for j in range(len(arr1)-1):
            arr2.append(arr1.pop(0))
            if arr2[-1]!=arr1[0]:
                if arr1.count(arr2[-1]):
                    ncnt+=1
        if ncnt==0:
            cnt+=1
print(cnt)