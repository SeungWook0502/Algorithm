t = int(input())

for _ in range(t):
    k = int(input()) ## 층
    n = int(input()) ## 호
    pers = [i for i in range(1, n+1)] ## 인원
    for __ in range(k):
        for j in range(1,n):
            pers[j] += pers[j-1]
    print(pers[-1])
    
