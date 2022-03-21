import sys # 시간초과 해결하기 위해 사용
n=int(input())
arr=[]
for case in range(n):
    arr.append(int(sys.stdin.readline())) # 이게 input() 보다 훨씬 빠름
arr.sort()
for i in arr:
    print(i)