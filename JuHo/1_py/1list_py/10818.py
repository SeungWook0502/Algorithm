n = int(input())
num = list(map(int, input().split()))
b = num[0]
s = num[0]

for i in range(n):
    if b<num[i]:
        b = num[i]
    if s>num[i]:
        s = num[i]
    
print(s,b,sep=" ")