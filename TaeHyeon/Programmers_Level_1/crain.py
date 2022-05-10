def solution(board, moves):
    answer = 0
    basket = [0]
    for crain in moves:
        for row in range(len(board)):
            if board[row][crain-1] != 0:
                basket.append(board[row][crain-1])
                board[row][crain-1] = 0
                if basket[-1] == basket[-2]:
                    basket=basket[:-2]
                    answer+=2
                break
    return answer