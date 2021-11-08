n=int(input())
for i in range(n):
    a=list(input())
    sum=0
    result=0
    for j in range(len(a)):
        if a[j]=="O":
            sum+=1
            result=sum+result
        elif a[j]=="X":
            sum=0
    print(result)