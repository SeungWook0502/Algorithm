import sys
def mode(arr):
    set_arr=list(set(arr)) # 리스트에서 중복 제거
    modenum=[] # 최빈값을 담기위한 리스트
    dic={n:0 for n in set_arr} # 중복제거한 리스트를 Key값으로 하고 0을 Value로 갖는 딕셔너리 생성
    for i in arr:
        dic[i]= dic[i]+1 # 배열에 있는 숫자를 키값으로 가지고있는 Value에 +1
    for key,value in dic.items(): # 딕셔너리에서
        if max(dic.values())==value: # Value중 최댓값을 갖는
            modenum.append(key) # Key를 리스트에 append
    modenum.sort() # 중복되는것이 있으면 두번째 작은수를 찾기위해 정렬
    if len(modenum)>1:
        print(modenum[1])
    else:
        print(modenum[0])
n=int(sys.stdin.readline())
arr=[]
for _ in range(n):
    arr.append(int(sys.stdin.readline()))
arr.sort() # 계산을 용이하게 하기위해 정렬을 먼저 함
print(round(sum(arr)/n)) # 산술 평균 (반올림을 하기위해 round() 함수 사용)
print(arr[n//2]) # 중앙값
mode(arr) # 최빈값
print(arr[-1]-arr[0]) # 최댓값 - 최솟값