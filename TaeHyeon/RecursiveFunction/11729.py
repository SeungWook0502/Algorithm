cnt=0
result=[]
def hanoi(n,tower1,tower2,tower3):
    global cnt,result
    if n==1:
        result.append([tower1,tower3]) # 1개가 남으면 무조건 1번 움직이기 때문에 설정
    else:
        hanoi(n-1,tower1,tower3,tower2) # n-1번 판을 1번 타워에서 3번 타워로 옮기며 나머지를 2번 타워로 옮김
        result.append([tower1,tower3]) # 이동 경로를 남기기 위해 append
        hanoi(n-1,tower2,tower1,tower3) # 2번 타워에서 제일 큰 판을 1번 타워로 옮긴 후 나머지 판들을 3번 타워로 옮김
    cnt+=1
n=int(input())
hanoi(n,1,2,3)
print(cnt)
for i in range(len(result)): #판이 어디서 어디로 이동했는지 출력해주는 부분
    for j in range(2):
        print(result[i][j],end=' ')
    print('')