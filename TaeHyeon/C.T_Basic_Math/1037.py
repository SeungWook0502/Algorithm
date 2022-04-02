cnt=int(input())
measure=list(map(int,input().split())) # 입력받은 정수를 리스트로 저장
print(min(measure)*max(measure)) # 리스트의 min값과 max값을 곱함