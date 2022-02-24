import math


h = 0 ## 현재 높이
day = 1
A, B, V = map(int, input().split())

h = A ## day 1

## day 2 ~
day += 1
day = (V-A)/(A-B)
   
print("{}".format(math.ceil(day)+1))