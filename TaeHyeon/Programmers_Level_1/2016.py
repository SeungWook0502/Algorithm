def solution(a, b):
    month=[31,29,31,30,31,30,31,31,30,31,30,31]
    day=['FRI',"SAT","SUN","MON","TUE",'WED','THU']
    cnt=0
    for i in range(a-1):
        cnt+=month[i]
    cnt+=b
    return day[cnt%7-1]