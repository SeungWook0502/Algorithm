def fac(n):
    sum=1
    if n>0: #0보다 크게 설정함으로써 0이 입력됐을때 1을 출력하게 함
        sum=n*fac(n-1)  #재귀함수 사용
    return sum
n=int(input())
print(fac(n))