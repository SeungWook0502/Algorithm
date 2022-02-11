t=int(input())  #아 이거 if문 순서를 잘못 생각해서 한참 고생했음...
for _ in range(t):
    x1, y1, r1, x2, y2, r2 = map(int,input().split())
    dis=(((x2-x1)**2)+((y2-y1)**2))**0.5    #두 점 사이의 거리
    if dis==0 and r1==r2:   #원이 완전히 겹칠 때
        print(-1)
    elif dis==r1+r2 or dis==abs(r1-r2): #원이 내접하거나 외접 할 때
        print(1)
    elif abs(r1-r2)<dis<r1+r2:  #원이 두 점에서 만날 때
        print(2)
    else:   #원이 만나지 않을 때
        print(0)