def printStars(n,arr):
    pre_arr = []
    if n<3:
        return arr
    else:
        for i in arr:
            pre_arr.append(i*3)
        for j in arr:
            pre_arr.append(j+' '*len(arr)+j)
        for k in arr:
            pre_arr.append(k*3)
        return printStars(n//3,pre_arr)
    
n = int(input())
star = "*"
stars = printStars(n, star)
for i in stars:
    print(i)