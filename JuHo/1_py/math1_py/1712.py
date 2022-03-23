a, b, c = map(int, input().split())
i = 1

if b>c:
    print(-1)
else:
    while True:
        if a + i * b < i * c:
            print(i)
            break
        i += 1
        