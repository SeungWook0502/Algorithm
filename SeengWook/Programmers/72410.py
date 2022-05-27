import re

def solution(new_id):
    new_id = new_id.lower() #1
    new_re = re.sub(r"[^a-z0-9-_.]", "", new_id)
    while ".." in new_re:
        new_re = new_re.replace("..", ".")

    # print(re.sub(r".", ".", new_re))
    print(new_re)
    if len(new_re) < 2:
        if len(new_re) == 0:
            new_re='a'
        elif new_re[0]=='.':
            new_re='a'
            
    else:
        if new_re[0]=='.':
            new_re = new_re[1:]
        if new_re[-1]=='.':
            new_re = new_re[0:-1]
            print(new_re)
    if len(new_re)==0:
        new_re = 'a'
    if len(new_re)>15:
        new_re = new_re[0:15]
    if new_re[-1]=='.':
        new_re = new_re[0:-1]
    while len(new_re)<3:
        new_re+=new_re[-1]

    return new_re


b = "abcdefghijklmn.p"
a = solution(b)
print(a)