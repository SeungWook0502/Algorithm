def solution(nums):
    answer = 0

    if len(set(nums)) > len(nums)/2:
        return len(nums)/2
    elif len(set(nums)) <= len(nums)/2:
        return len(set(nums))