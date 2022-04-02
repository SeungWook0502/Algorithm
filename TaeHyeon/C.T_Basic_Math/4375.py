while 1:
    try: # 종료 조건 없는 while문은 예외처리를 해야 오류가 안 남
        n=int(input())
    except:
        break
    num=1
    cnt=10
    while 1:
        if num%n==0: # num을 n으로 나누었을때 나머지가 0이면
            print(len(list(str(num)))) # num을 리스트로 변환 후 리스트의 요소 개수를 출력
            break
        else:
            num+=cnt # 아니면 cnt를 더한 후
            cnt*=10 # cnt에 10을 곱함