from itertools import combinations as cb
def solution(numbers):
    answer = []
    com = list(cb(numbers,2))
    for i,j in com:
        answer.append(i+j)
    arr = list(set(answer))
    arr.sort()
    return arr