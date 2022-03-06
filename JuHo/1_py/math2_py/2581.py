m = int(input())
n = int(input())

sosu = 0
min = n

for num in range(m, n+1):
    cnt = 0
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                cnt += 1
                break
        if cnt == 0:
            sosu += num
            if min > num:
                min = num

if sosu != 0:
    print(sosu, min, sep = '\n')
else:
    print('-1')

            