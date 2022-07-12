def solution(s):
    arr = list(s.lower())
    if arr.count('p') == arr.count('y'):
        return True
    else:
        return False