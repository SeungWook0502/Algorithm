m, n = map(int, input().split())

for num in range(m, n +1):
    if num == 1:
        continue
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            break
    else:  ## break 가 안걸리고 for문이 끝나면 else문 실행
        print(num)
