def printStars(n,arr):
        pre_arr=[]
        if n==3:    #3이 들어오면
            return arr  #배열 리턴
        else:   #각 행에 해당하는 별의 문양을 3번씩 pre_arr 배열에 추가
            for i in arr:
                pre_arr.append(i*3)
            for j in arr:
                pre_arr.append(j+' '*len(arr)+j)    #가운데 별은 없어야 함으로 빈 칸과 배열의 길이를 곱함
            for k in arr:                           #배열의 길이를 곱함으로써 가운데 빈 공간의 크기를 정할 수 있음
                pre_arr.append(k*3)
            return printStars(n//3,pre_arr)  #마지막으로 입력받은 정수에서 3을 나눈 몫과 만들어진 배열을 넘김
n=int(input())
arr=['***','* *','***'] #기본 별을 줌
stars=printStars(n,arr) #함수에 입력받은 정수와 별 배열을 줌
for i in stars:
    print(i)