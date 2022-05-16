from itertools import combinations as cb # 중복을 허용하지 않고 배열에서 요소를 조합해줌

def solution(nums):
    answer = 0
    com = list(cb(nums,3)) # nums에서 중복을 허용하지 않고 3개씩 튜플로 묶은 후 for 문 처리를 위해 list로 감쌈
    for i in com:
        if sosu(sum(i)):
            answer+=1
    return answer
def sosu(x):
    for j in range(2, int(x** 0.5)+1 ): #에라토스테네스의 체
            if x%j==0:
                return False
    return True