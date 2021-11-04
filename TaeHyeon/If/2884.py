H, M = map(int,input().split())
if M-45 >=0:
    print(H,M-45)
elif M-45 < 0 and H-1 >= 0:
    a = M-45
    print(H-1,60+a)
elif M-45 < 0 and H-1 < 0:
    a = M-45
    print("23",60+a)