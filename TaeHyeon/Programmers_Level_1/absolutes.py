def solution(absolutes, signs):
    for i in range(len(signs)):
        if not signs[i]:
            print(absolutes[i])
            absolutes[i]=0-absolutes[i]
    return sum(absolutes)