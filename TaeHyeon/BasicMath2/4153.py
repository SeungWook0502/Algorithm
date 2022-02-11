while 1:
    length=list(map(int, input().split()))  #세 변의 길이를 리스트로 받음
    if length.count(0)==3:  #리스트에 0이 3개 있으면 종료
        break
    length.sort()   #리스트를 정렬하여 오름차순으로 바꿈
    if length[0]**2 + length[1]**2 == length[2]**2: #피타고라스의 정리
        print('right')
    else:
        print('wrong')