def fibonacci(n):
    if n<=1:    #1보다 작거나 같으면 계산이 안돼서 if문 넣어줌
        return n
    return fibonacci(n-1)+fibonacci(n-2)    #재귀함수
n=int(input())
print(fibonacci(n))