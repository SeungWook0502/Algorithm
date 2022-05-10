def solution(a, b):
    answer=0
    for a,b in zip(a,b):    # zip 함수를 사용해 봄. 길이가 같은 배열을 같은 인덱스에 위치해있는 원소들과 연결
        answer+=a*b
    return answer