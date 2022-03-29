n=int(input())
member=[]
for _ in range(n):
    age,name=input().split()
    age=int(age) # 이거 안넣어줘서 자꾸 틀림...
    member.append([age,name])
member.sort(key=lambda x:x[0]) # 파이썬은 자체가 stable sort 라서 입력값중 첫번째 값인 나이만 비교
for i,j in member:
    print(i,j)