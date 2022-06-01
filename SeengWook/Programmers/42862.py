def solution(n, lost, reserve):
    check_list = [1]*n
    for i in lost:
        check_list[i-1]-=1
    for i in reserve:
        check_list[i-1]+=1

    check_i = 0
    while check_i+1 < len(check_list):

        if (check_list[check_i] == 0 and check_list[check_i+1] == 2) or (check_list[check_i] == 2 and check_list[check_i+1] == 0):
            check_list[check_i] = 1
            check_list[check_i+1] = 1

        check_i+=1
    answer = len([i for i in check_list if i>0])
    return answer

a = 5
lost = [2,4]
reserve = [3]
b = solution(a, lost, reserve)