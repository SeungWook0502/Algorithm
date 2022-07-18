def solution(arr):
    arr.pop(arr.index(min(arr)))
    if arr:
        return arr
    else:
        return [-1]