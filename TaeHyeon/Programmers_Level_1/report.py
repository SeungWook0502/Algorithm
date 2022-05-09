def solution(id_list, report, k):
    answer = []
    set_report=list(set(report)) # 중복 신고 제거
    report_to=[]
    reported_user={n:0 for n in id_list}
    report_user={n:0 for n in id_list}
    for i in set_report:
        cut=i.split(' ')
        reported_user[cut[1]]+=1
        report_to.append(cut)
    for key,value in reported_user.items():
        if value >= k:
            for i,j in report_to:
                if j == key:
                    report_user[i]+=1
    for i,j in report_user.items():
        answer.append(j)
    return answer