def solution(x, n):
    answer = []
    a=0
    while n>0:
        a+=x
        answer.append(a)
        n-=1
    return answer