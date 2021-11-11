# 개발중...
n=int(input())
cnt=0
ncnt=0
for i in range(n):
    arr1=list(input())
    arr2=[]
    if len(arr1)==1:
        print("d")
        cnt+=1
    else:
        for j in range(len(arr1)-1):
            arr2.append(arr1.pop(0))
            if arr2[-1]!=arr1[0] and arr1.count(arr2[-1])>=1:
                print("a")
                break
            elif arr2[-1]==arr1[0] and arr1.count(arr2[-1])>=1:
                print("b")
                print(arr1)
                print(arr2)
                ncnt+=1
            else:
                print("c")
                cnt+=1
                break
print(cnt)