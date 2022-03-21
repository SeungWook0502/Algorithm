n=int(input())
xy=[]
for _ in range(n):
    x,y=map(int,input().split())
    xy.append([y,x]) # 입력 거꾸로
xy.sort() # 정렬 함수 사용
for i,j in xy:
    print(j,i) # 출력도 거꾸로