# 효율성 이라는 채점 기준이 있던 문제였음
def solution(participant, completion):
    participant.sort() # 먼저 두 리스트를 정렬
    completion.sort()
    completion.append(' ') # 리스트의 길이를 맞추기 위해 임의로 삽입
    for i,v in enumerate(completion): # enumerate를 사용하여 index 와 value값을 동시에 가져옴
        if participant[i] != v: # 만약 다르면
            return participant[i] # 바로 리턴