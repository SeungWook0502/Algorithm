import sys
n=int(input())
xn=list(map(int,sys.stdin.readline().split()))
xi=list(set(xn)) # xn리스트에서 중복 제거
xi.sort() # 인덱스를 맞춰주기 위해 정렬
dic={xi[i]:i for i in range(len(xi))} # dic 딕셔너리에 key값으로 xi의 요소를 주고, value값으로 0부터 xi의 크기만큼 숫자를 줌
for i in xn: # dic에서 해당 value값 출력
    print(dic[i],end=' ')