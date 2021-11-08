c=int(input())
for case in range(c):
    arr=list(map(int,input().split()))
    a=0
    for i in range(1,len(arr)):
        if arr[i]>((sum(arr)-arr[0])/arr[0]):
            a+=1
    print('%.3f%%'%(a/arr[0]*100))