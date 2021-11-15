import sys
t=int(input())
for case in range(t):
    h,w,n=map(int,sys.stdin.readline().split())
    if n<h:
        print(n*100+1)
    elif n%h==0:
        print(h*100+n//h)
    else:
        print(n%h*100+n//h+1)