N = int(input())
M = []

for i in range(N):
    M.append(int(input()))
    
for i in range(len(M)):
    for j in range(len(M)):
        if M[i] < M[j]:
            M[i], M[j] = M[j], M[i]  ## 두 원소값 바꾸기

for n in M:
    print(n)
