def solution(numbers, hand):
    answer = ''
    lf=10   # 시작 위치 (*은 10, #은 12, 0은 11)
    ri=12  
    for i in numbers:
        if i in [1,4,7]:
            answer+='L'
            lf=i
        elif i in [3,6,9]:
            answer+='R'
            ri=i
        else:
            if i == 0:
                i=11
            l_dis=sum(divmod(abs(i-lf),3))  # 이렇게 하니 공평한 거리를 구할 수 있었음
            r_dis=sum(divmod(abs(i-ri),3))
            if l_dis < r_dis:
                answer+='L'
                lf=i
            elif r_dis < l_dis:
                answer+='R'
                ri=i
            else:
                if hand == 'right':
                    answer+='R'
                    ri=i
                else:
                    answer+='L'
                    lf=i
    return answer