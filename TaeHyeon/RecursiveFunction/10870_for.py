def fibonacci(n):
    num=[0,1]
    for i in range(2,n+1):
        x=num[i-1]+num[i-2] #생각해보니 이건 그냥 for문이였어...
        num.append(x)
    return num[n]
n=int(input())
print(fibonacci(n))