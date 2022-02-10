location = [list(map(int, input().split())) for _ in range(3)] #세 좌표를 입력
point=[]    #알아낼 좌표를 구하기 위해 리스트 선언
for i in range(3):
    for j in range(3):
        point.append([location[i][0],location[j][1]])   #모든 좌표의 조합을 배열에 넣음
for x,y in point:
    if point.count([x,y])==1:   #조합된 좌표들중 다른 좌표와 겹치지 않고 한개만 존재하는 좌표가 나오면
        print(x,y)  #출력
        break