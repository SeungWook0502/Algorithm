n=int(input())
for num in range(2,n+1):
    if n==1:
        break
    else:
        while n!=1:
            if n%num!=0:
                break
            else:
                n//=num
                print(num)