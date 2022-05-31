def solution(nums):
    answer = 0

    num_list = [True] * (max(nums)*3)

    for i in range(2, max(nums)*3):
        j = 2
        while i*j < (max(nums)*3):
            num_list[i*j] = False
            j+=1

    for i in range(len(nums)-2):
        if len(nums[i:]) > 1:
            for j in range(i+1, len(nums)-1):
                if len(nums[j:]) > 0:
                    for l in range(j+1, len(nums)):
                        if num_list[nums[i] + nums[j] + nums[l]]:
                            answer+=1

    return answer


nums = [1,2,7,6,4]
b = solution(nums)