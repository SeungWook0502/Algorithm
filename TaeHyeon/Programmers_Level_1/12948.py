def solution(phone_number):
    arr=list(phone_number)
    for i in range(len(phone_number)-4):
        arr[i]='*'
    result = ''.join(s for s in arr)
    return result