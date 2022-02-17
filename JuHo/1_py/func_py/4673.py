def func(num):
    num = num + sum(map(int, str(num)))
    return num

bool = [0] * 10001
for n in range(1,10001):
    if func(n)<10000:
        bool[func(n)] = 1
    
for n in range(1,10000):
    if bool[n] == 0:
        print(n)

