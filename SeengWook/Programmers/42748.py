def solution(array, commands):
    answer = []

    for i in commands:
        com_slice = array[i[0]-1:i[1]]
        com_slice.sort()
        answer.append(com_slice[i[2]-1])

    return answer

array = [1, 5, 2, 6, 3, 7, 4]
commands = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]
a = solution(array, commands)
print(a)