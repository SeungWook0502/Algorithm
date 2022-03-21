n=int(input())
arr=[]
for _ in range(n):
    a=input()
    b=len(a) # 문자열의 길이도 리스트에 같이 넣음
    arr.append([b,a])
arr.sort() # 리스트 정렬
new_arr=[j for i,j in arr] # 정렬된 리스트에서 문자열만 다시 리스트로 만듦
set_arr=[]
for k in new_arr: # 중복제거
    if k not in set_arr:
        set_arr.append(k)
for l in set_arr:
    print(l)