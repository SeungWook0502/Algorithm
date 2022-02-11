import math #처음엔 직접 원주율을 입력했지만
# pi=3.141952   이런식으로 했는데 계속 계산에 오차가 있어서 math import 함
def texi(r):   #텍시 기하학에서의 원을 계산하는 함수
    result = ((2*r)**2)/2   #그냥 마름모 계산하는거
    return result
def euclidean(r):   #유클리드 기하학에서 원 계산하는 함수
    result = (r**2)*math.pi    #그냥 원 계산하는거
    return result
r=int(input())
print("{:.6f}".format(euclidean(r)))
print("{:.6f}".format(texi(r)))