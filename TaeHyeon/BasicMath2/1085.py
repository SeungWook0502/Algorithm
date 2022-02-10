x,y,w,h=map(int, input().split())
escape_lenght=[x,y,w-x,h-y]
print(min(escape_lenght))