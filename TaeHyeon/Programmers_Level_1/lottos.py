def solution(lottos, win_nums):
    answer = []
    lank = {6:1,5:2,4:3,3:4,2:5,1:6,0:6}
    cnt = 0
    for i in win_nums:
        if i in lottos:
            cnt+=1
    unknown_num=lottos.count(0)
    max=cnt+unknown_num
    min=cnt
    answer.append(lank[max])
    answer.append(lank[min])
    return answer