def solution(nums):
    sort_arr = list(set(nums))
    if len(sort_arr)>len(nums)//2:
        return len(nums)//2
    else:
        return len(sort_arr)