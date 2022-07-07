import numpy as np
def solution(n, arr1, arr2):
    answer = []
    map1=[]
    map2=[]
    for i in arr1:
        a=str(bin(i)[2:])
        while len(a)<n:
            a = str(0)+a
        map1.append(list(a))
    for j in arr2:
        a=str(bin(j)[2:])
        while len(a)<n:
            a = str(0)+a
        map2.append(list(a))
    map1=np.array(map1,dtype=np.uint8)
    map2=np.array(map2,dtype=np.uint8)
    map3=map1+map2
    for i in map3:
        str1=''
        for j in i:
            if j != 0:
                str1+='#'
            else:
                str1+=' '
        answer.append(str1)
    return answer