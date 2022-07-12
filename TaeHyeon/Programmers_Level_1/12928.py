def solution(n):
    yaksu=[]
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif n < 5:
        for i in range(1,n):
            if n%i==0:
                yaksu.append(i)
                yaksu.append(n//i)
    else:
        for i in range(1,n//2):
            if n%i==0:
                yaksu.append(i)
                yaksu.append(n//i)
    arr=list(set(yaksu))
    return sum(arr)