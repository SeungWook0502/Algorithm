n=int(input())
arr=list(input())
a=0
for i in arr:
    a+=int(i)
print(a)
"""     다른 방법
n=int(input())
arr=list(input())
print(sum(map(int,arr)))
"""