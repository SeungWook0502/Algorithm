n = int(input())

number = n
num = 2
while num < n:
    cnt = 0
    for i in range(2, num):
        if num % i == 0:
            cnt += 1
            break
    if cnt == 0: 
        if number % num == 0:
            print(num)
            number = number / num
            continue
    num += 1
    