s=input().upper()
arr=[]
arr2=[]
for i in range(26):
    arr.append(0)
for j in s:
    arr[ord(j)-65]+=1
for k in arr:
    if k not in arr2:
        arr2.append(k)
if arr.count(max(arr2))>1:
    print("?")
else:
    print(chr(arr.index(max(arr))+65))