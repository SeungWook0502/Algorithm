def solution(nums):
    answer = 0
    for a in range(len(nums)-2): # 리스트에서 세가지 숫자를 골라서 더해야 하기 때문에 for문 3개나 써버림...
        for b in range(a+1,len(nums)-1):
            for c in range(b+1,len(nums)):
                if sosu(nums[a]+nums[b]+nums[c]):
                    answer+=1
    return answer
def sosu(x):
    for j in range(2, int(x** 0.5)+1 ): #에라토스테네스의 체
            if x%j==0:
                return False
    return True