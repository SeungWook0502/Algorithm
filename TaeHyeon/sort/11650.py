n=int(input())
xy=[]
for _ in range(n):
    x,y=map(int,input().split())
    xy.append([x,y])
xy.sort() # 정렬 함수 사용
for i,j in xy:
    print(i,j)