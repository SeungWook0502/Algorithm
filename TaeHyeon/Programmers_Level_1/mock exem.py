def solution(answers):
    p_1=[1,2,3,4,5] # 패턴 선 입력
    p_2=[2,1,2,3,2,4,2,5]
    p_3=[3,3,1,1,2,2,4,4,5,5]
    score=[0,0,0]
    answer = []
    for i,v in enumerate(answers):  # enumerate 사용해서 인덱스값과 벨류값 가져옴
        if v == p_1[i%5]:   # 숫자 반복해야 해서 나머지 사용
            score[0]+=1
        if v == p_2[i%8]:
            score[1]+=1
        if v == p_3[i%10]:
            score[2]+=1

    for i,v in enumerate(score):
        if v == max(score):
            answer.append(i+1)
    return answer