c = int(input())


for t in range(c):
    sum = 0
    cnt = 0
    score = list(map(int, input().split()))
    for i in range(1,score[0]+1):
        sum += score[i]
    avg = sum//score[0]
    print(sum,avg)
    for i in range(1,score[0]+1):
        if score[i]>avg:
            cnt += 1
    print("{:.3f}%".format(100*cnt/score[0]))