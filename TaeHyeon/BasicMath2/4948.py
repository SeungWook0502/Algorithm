def sosu(x):    #함수를 사용하여 global코드에서의 동적인 부분을 정적으로 로컬 변수들을 지정하기 때문에 속도가 빨라짐
    if x==1:
        return False
    for j in range(2, int(x** 0.5)+1 ): #에라토스테네스의 체
            if x%j==0:
                return False
    return True
all_num= list(range(2,246912))  #함수 사용만으로 속도가 충족되지 않아서 문제에서 주어진 범위 내의 모든 소수를 미리 입력
sosu_list=[]
for i in all_num:
    if sosu(i):
        sosu_list.append(i)
while 1:
    m = int(input())    #sosu_list에서 해당하는 범위 내에 있는 값만 count함으로써 속도를 증가시킬 수 있었음
    cnt=0
    if m==0:
        break
    for i in sosu_list:
        if m<i<=2*m:
            cnt+=1
    print(cnt)