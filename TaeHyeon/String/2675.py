t=int(input())
for k in range(t):
    a,b=input().split()
    for i in b:
        print(i*int(a),end="")
    print()