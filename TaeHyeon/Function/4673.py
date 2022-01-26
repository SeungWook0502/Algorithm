arr=[]
for i in range(1,10001):
    arr.append(i)
for n in range(1,10000):
    if n+n//1000+(n//100)%10+((n//10)%100)%10+n%10 in arr:
        arr.remove(n+n//1000+(n//100)%10+((n//10)%100)%10+n%10)
for j in arr:
    print(j)