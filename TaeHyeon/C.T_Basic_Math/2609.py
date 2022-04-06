def calc(a,b): # 최대공약수 구하는 함수
    if b==0:
        return a
    a=a%b # 유클리드 호제법 사용
    return calc(b,a) # a에 0을 넘겨줄때까지 재귀
a,b=map(int,input().split())
print(calc(a,b))
print(a*b//calc(a,b)) # 최소공약수는 두 수의 곱을 최대공약수로 나누어주면 됨