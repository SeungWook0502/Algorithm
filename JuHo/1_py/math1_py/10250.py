T = int(input())

for _ in range(T):
    H,W,N = map(int, input().split())
    x = N//H
    
    if N%H == 0:
        y = H
    else:
        y = N-(H*x)
        x += 1
        
    if x<10:
        print(y,x,sep='0')
    else:
        print(y,x,sep='')