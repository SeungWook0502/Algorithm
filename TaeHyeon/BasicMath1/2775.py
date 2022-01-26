t=int(input())
for case in range(t):
    k=int(input())
    n=int(input())
    base=[i for i in range(1,n+1)]
    for floor in range(k):
        for room in range(1,n):
            base[room]+=base[room-1]
    print(base[-1])