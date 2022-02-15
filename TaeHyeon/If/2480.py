num=list(map(int, input().split())) #리스트로 세 정수를 받음
num.sort()                          #오름차순 정렬
if num[0]==num[1]==num[2]:          #모두 같은 정수
    price=10000+num[0]*1000
    print(price)
elif num.count(num[0])==2:          #두개만 같은 정수
    price=1000+num[0]*100
    print(price)
elif num.count(num[2])==2:
    price=1000+num[2]*100
    print(price)
else:                               #나머지
    print(num[2]*100)