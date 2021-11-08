n=int(input())
arr1=list(map(int,input().split()))
arr2=[]
for i in range(len(arr1)):
    arr2.append(arr1[i]/max(arr1)*100)
print(sum(arr2)/n)