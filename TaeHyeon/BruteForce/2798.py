def blackJack(card):    #카드를 정렬하는 함수
    arr=[]
    a=1
    b=2
    for i in card:
        for j in card[a:]: # for문이 실행된 후 a+=1 함으로써 다음 순서로 넘기고 b를 a보다 1 크게 함으로써 다시 순서를 설정
            for k in card[b:]:  #한번 for문이 실행된 후 b+=1 함으로써 다음 순서로 넘김
                arr.append(i+j+k) #세장의 카드를 모두 더해서 arr에 추가함
            b+=1
        a+=1
        b=a+1
    result=list(set(arr))   #중복 제거 후 result 반환
    return result
def winner(m,result):   #우승자를 찾는 함수
    arr2=[]
    for i in result:    #result 배열에서
        if i<= m:   # m보다 작은 수면
            arr2.append(i)  #arr2에 추가
    print(max(arr2))    #arr2 에서 가장 큰 수 출력
n,m=map(int,input().split())
card=list(map(int,input().split()))
result=blackJack(card)
winner(m,result)