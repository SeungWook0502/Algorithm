def solution(sizes):
    answer = 0
    for i in sizes:
        i.sort()
    a = max(list(zip(*sizes))[0])
    b = max(list(zip(*sizes))[1])
    answer = a*b
    return answer