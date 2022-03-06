from re import L


m, n = map(int, input().split())
sosu = []

for num in range(m, n +1):
    if num == 2:
        sosu.append(num)
    elif num > 2:
        cnt = 0
        for i in range(2, num):
            if num % i == 0:
                cnt += 1
                break
        if cnt == 0:
            sosu.append(num)

for i in sosu:
    print(i)
