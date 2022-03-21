import sys # 입력 시간 단축하기위해 사용
n=int(sys.stdin.readline())
arr=[0 for _ in range(10000)] # 10000미만의 자연수의 범위가 주어졌기 때문에 미리 배열 선언
for i in range(n):
    a=int(sys.stdin.readline())
    arr[a-1]=arr[a-1]+1 # 입력받은 수에 해당하는 인덱스에 수가 들어올때마다 +1
for j in range(10000): # 범위가 이미 주어졌기 때문에 검사 범위를 미리 설정
    if arr[j]!=0: # 해당하는 숫자가 가르키고 있는 배열의 요소가 0이 아니면
        for k in range(arr[j]): # 그 인덱스에 있는 숫자만큼
            print(j+1) # j+1 을 출력