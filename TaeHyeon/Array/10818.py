n=int(input())
arr=list(map(int,input().split()))
arr.sort()
print(arr[0],arr[n-1])
"""
이 외의 방법
print(min(arr),max(arr))
"""