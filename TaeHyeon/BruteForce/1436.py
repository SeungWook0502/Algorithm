def jongmal(n):
    a=666
    while n!=0:
        if '666' in str(a): # 정수 a를 문자열로 바꾼 후 그 문자열 안에 666이 포함되어있으면
            n-=1 # n-=1
        a+=1
    print(a-1)
n=int(input())
jongmal(n)