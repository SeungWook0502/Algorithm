def checkboard(n,m,board):
    cntarr=[]
    a=n-8
    b=m-8
    for i in range(a+1):
        for j in range(b+1):
            cnt_w=0
            cnt_b=0
            for k in range(i,i+8):
                for l in range(j,j+8):
                    if (k+l)%2==0 and board[k][l]=='W': # 짝수행 짝수열과 홀수행 홀수열이 W면
                        cnt_w+=1    # W에 1 카운트
                    elif (k+l)%2==0 and board[k][l]=='B': #            ''               B면
                        cnt_b+=1    # B에 1 카운트
                    elif (k+l)%2==1 and board[k][l]=='W': # 짝수행 홀수열과 홀수행 짝수열이 W면
                        cnt_b+=1    # B에 1 카운트
                    elif (k+l)%2==1 and board[k][l]=='B': #            ''                 B면
                        cnt_w+=1    # W에 1 카운트
            cntarr.append(cnt_w)
            cntarr.append(cnt_b)
    print(min(cntarr))  # 배열에서 최솟값 출력
n,m=map(int,input().split())
board=[]
for _ in range(n):
    board.append(list(input()))
checkboard(n,m,board)