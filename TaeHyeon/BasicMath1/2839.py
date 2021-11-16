n=int(input())
cnt1,cnt2=0,0
a,b=n,n
if n%5==0:
    print(n//5)
else:    
    while 1:
        a-=5
        if a<0:
            cnt1=5000
            break
        cnt1+=1
        if a%3==0:
            cnt1+=a//3
            break
    while 1:
        b-=3
        if b<0:
            cnt2=5000
            break
        cnt2+=1
        if b%5==0:
            cnt2+=b//5
            break
    if cnt1>cnt2:
        print(cnt2)
    elif cnt1==5000 and cnt2==5000:
        print(-1)
    else:
        print(cnt1)