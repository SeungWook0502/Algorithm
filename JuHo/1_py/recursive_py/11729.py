def hanoi(num,start,tmp,end):
    if(num == 1):
        print(start, end)
    else:
        hanoi(num-1,start,end,tmp)
        print(start,end)
        hanoi(num-1,tmp,start,end)

num = int(input())
print((2**num)-1)
hanoi(num,1,2,3)