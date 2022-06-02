import math
def solution(left, right):
    answer = 0

    for i in range(left, right+1):
        if math.sqrt(i)%1==0:
            answer-=i
        else:
            answer+=i

    return answer

left = 24
right = 27
a = solution(left, right)
print(a)