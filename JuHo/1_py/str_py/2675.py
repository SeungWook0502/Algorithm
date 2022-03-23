t = int(input())

for _ in range(t):
    r, s = map(str, input().split())
    r = int(r)
    p = ''
    
    for i in range(len(s)):
        p = p + (s[i] * r)
    print(p)
    