def solution(numbers, hand):
    answer = ''

    sidpad = {
        1:['L',[0,0]],
        3:['R',[0,2]],
        4:['L',[1,0]],
        6:['R',[1,2]],
        7:['L',[2,0]],
        9:['R',[2,2]]
    }
    midpad = {
            0:[3,1],
            2:[0,1],
            5:[1,1],
            8:[2,1]
        }
    l_hand = [3,2]
    r_hand = [3,0]
    for e in numbers:
        if e in sidpad:
            answer+=sidpad[e][0]
            if sidpad[e][0]=='L':
                l_hand=sidpad[e][1]
            else:
                r_hand=sidpad[e][1]
        else:
            l_diff = abs(midpad[e][0]-l_hand[0])+abs(midpad[e][1]-l_hand[1])
            r_diff = abs(midpad[e][0]-r_hand[0])+abs(midpad[e][1]-r_hand[1])
            if l_diff > r_diff:
                answer+='R'
                r_hand=midpad[e]
            elif l_diff == r_diff:
                if hand=='right':
                    answer+='R'
                    r_hand=midpad[e]
                else:
                    answer+='L'
                    l_hand=midpad[e]   
            else:
                answer+='L'
                l_hand=midpad[e]

    return answer

b = [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]
print(solution(b, "right"))