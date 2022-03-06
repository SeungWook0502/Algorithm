n = int(input())
number = map(int, input().split())
sosu = 0
for num in number:
    cnt = 0
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                cnt += 1
        if cnt == 0:
            sosu += 1
print(sosu)
