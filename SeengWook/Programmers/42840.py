def solution(answers):
    answer = [0,0,0]
    s_list = []
    
    s2_ftt = [5,1,3,4]
    s3_ftt = [3,1,2,4,5]

    s1 = list(map(lambda x : x%5+1, range(0, len(answers))))
    s2 = list(map(lambda x : s2_ftt[round(x%8/2)] if x%8%2==0 else 2, range(1, len(answers)+1)))
    s3 = list(map(lambda x : s3_ftt[int(x%10/2)], range(len(answers))))

    for a, s1a, s2a, s3a in zip(answers, s1, s2, s3):
        if a == s1a:
            answer[0]+=1
        if a==s2a:
            answer[1]+=1
        if a==s3a:
            answer[2]+=1
    max_s = max(answer)
    if max_s == answer[0]:
        s_list.append(1)
    if max_s == answer[1]:
        s_list.append(2)
    if max_s == answer[2]:
        s_list.append(3)

    return s_list

answers = [1,3,2,4,2]
a = solution(answers)
print(a)