# 왜 시간초과야 외않되 도대체 얼마나 더 줄여달라는거야 ㅁㅇ;ㅣ러매ㅑㅈ덜매쟈더래ㅑㅓㅈㄹ ㅐㅑㅓㅁ
# 시간초과(211118)
n=int(input())
for num in range(2,n+1):
    if n==1:
        break
    for j in range(2,num):
        if num%j==0:
            break
    else:
        while n!=1:
            if n%num!=0:
                break
            else:
                n//=num
                print(num)