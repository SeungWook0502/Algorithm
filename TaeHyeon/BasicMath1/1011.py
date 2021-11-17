# 구글에서 표 참고 함
# 순서도에서 규칙 찾기
t=int(input())
for case in range(t):
    x,y=map(int,input().split())
    dis=y-x
    a=0
    while 1:
        if dis<=a*(a+1):
            break
        a+=1
    if dis<=a**2:
        print(a*2-1)
    else:
        print(a*2)