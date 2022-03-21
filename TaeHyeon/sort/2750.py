n=int(input())
num=[]
for _ in range(n):
    num.append(int(input()))
num.sort() # 파이썬 내장 정렬 함수
for i in num:
    print(i)