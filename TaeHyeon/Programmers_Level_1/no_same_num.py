def solution(arr):
    answer = []
    queue = []
    for i in arr:
        queue.append(i)
        if len(queue)>1:
            if queue[-1] == queue[-2]:
                continue
            answer.append(queue[-2])
            del queue[0:-2]
    answer.append(arr[-1])
    return answer