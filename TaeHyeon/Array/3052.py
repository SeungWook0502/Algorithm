arr1=[]
arr2=[]
arr3=[]
for i in range(10):
    arr1.append(int(input()))
for j in range(len(arr1)):
    arr2.append(arr1[j]%42)
for k in arr2:
    if k not in arr3:
        arr3.append(k)
print(len(arr3))