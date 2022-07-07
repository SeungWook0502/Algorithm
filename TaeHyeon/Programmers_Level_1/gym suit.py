def solution(n, lost, reserve):
    answer = n-len(lost)
    for i in lost:
        if i in reserve:
            reserve.remove(i)
            answer+=1
        elif i-1 in reserve:
            answer+=1
            reserve.remove(i-1)
        elif i+1 in reserve:
            answer+=1
            reserve.remove(i+1)
    return answer