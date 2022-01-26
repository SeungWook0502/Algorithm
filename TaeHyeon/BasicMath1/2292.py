n=int(input())
cnt,c=0,1
while 1:
    c+=cnt*6
    cnt+=1
    if n-c<=0:
        break
print(cnt)