n=int(input())
sum=0
for i in range(1,n+1):
    if i<100:
        sum+=1
    else:
        num=list(map(int,str(i))) #i를 정수형으로 리스트에 한자리씩 입력
        if num[0]-num[1] == num[1]-num[2]:
            sum+=1
print(sum)