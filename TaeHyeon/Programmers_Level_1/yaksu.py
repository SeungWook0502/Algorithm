def solution(left, right):
    answer = 0
    for i in range(left,right+1):
        if i == 1:
            answer -= 1
            continue
        elif i == 2:
            answer += 2
            continue
        elif i == 3:
            answer += 3
            continue
        elif i == 4:
            answer -= 4
            continue
        cnt=0
        for j in range(1,i//2):
            if i % j == 0:
                cnt+=1
                if j != i//j:
                    cnt+=1
        if cnt%2 == 0:
            answer += i
        else:
            answer -= i
    return answer