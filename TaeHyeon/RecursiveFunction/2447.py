def printStars(n):
    if n==3:
        arr[1]=[1,0,1]
        return arr
    
        
        
        
n=int(input())
arr=[[1 for i in range(n)]for i in range(n)]
printStars(n)

for i in arr:
    for j in i:
        if j:
            print('*',end='')
        else:
            print(' ',end='')
    print()