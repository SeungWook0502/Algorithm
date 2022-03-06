def bunhaesu(n):
    for i in range(1,n):
        num=list(map(int,str(i)))   # 입력받은 정수를 자릿수마다 나누어 배열에 입력
        if i+sum(num)==n:   # i와 배열의 합이 n이면 출력
            print(i)
            return  #그리고 함수 종료
    print(0) #위에서 종료되지 않으면 0 출력
n=int(input())
bunhaesu(n)