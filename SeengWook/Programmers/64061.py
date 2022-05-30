def solution(board, moves):
	answer = 0
	pop_list = []

	t_board = [list(x) for x in zip(*board)]

	for ele in t_board:
		while 0 in ele:
			ele.remove(0)

	for move in moves:
		move-=1
		if len(t_board[move])>0:
			if len(pop_list) > 0:
				if pop_list[-1]==t_board[move][0]:
					pop_list.pop()
					answer+=2
				else:
					pop_list.append(t_board[move][0])
			else:
				pop_list.append(t_board[move][0])
			t_board[move].pop(0)

	print(t_board)
	print(pop_list)


	return answer


board = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
moves = [1,5,3,5,1,2,1,4]
answer = solution(board, moves)
print(answer)