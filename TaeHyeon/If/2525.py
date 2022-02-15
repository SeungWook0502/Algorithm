a,b=map(int,input().split())
c=int(input())
if b+c>=60: #분을 합친 값이 60을 넘어가면
    a+=1    #시간에 1을 더하고
    d=b+c-60    #분에서 60을 뺀 값을 d에 넣음
    while 1:    #Python에는 do while 루프가 없어서 True로 설정 후
        if d>=60:   #d가 60보다 크거나 같으면
            a+=1    #시간에 1을 더하고
            d-=60   #d에서 60을 뺌
        if a>=24:   #시간이 24보다 크거나 같을 경우
            a=0     #시간을 0으로 설정
        if a<24 and d<60:   #시간과 분이 모든 조건을 만족 하면
            break           #while문 종료
    print(a,d)
else:
    print(a,b+c)