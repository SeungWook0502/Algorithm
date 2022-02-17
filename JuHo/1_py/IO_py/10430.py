A, B, C = map(int, input().split())
a = (A+B)%C
b = ((A%C)+(B%C))%C
c = (A*B)%C
d = ((A%C)*(B%C))%C
print((A+B)%C, ((A%C)+(B%C))%C, (A*B)%C, ((A%C)*(B%C))%C, sep="\n")