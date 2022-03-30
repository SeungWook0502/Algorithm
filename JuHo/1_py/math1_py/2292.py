n = int(input())
cnt = 1
cnt_six = 6
r_cnt = 1
while n > cnt:
    r_cnt += 1
    cnt += cnt_six
    cnt_six += 6
print(r_cnt)