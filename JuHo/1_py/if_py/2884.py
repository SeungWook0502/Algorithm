h, m = map(int, input().split())

if m>=45:
    print(h, m-45, sep=" ")
elif m<45:
    if h>0:
        print(h-1, 60-45+m, sep=" ")
    else:
        print(23, 60-45+m, sep=(" "))