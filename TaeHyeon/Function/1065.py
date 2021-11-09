n=int(input())
sum=0
for i in range(1,n+1):
    if i!=1000 and (i//100)%10-((i//10)%100)%10 == ((i//10)%100)%10-i%10 or i<100:
        sum+=1
print(sum)