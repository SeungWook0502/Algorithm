def solution(s):
    num={'zero':0,'one':1,'two':2,'three':3,'four':4,'five':5,'six':6,'seven':7,'eight':8,'nine':9}
    for key,value in num.items():
        if key in s:
            s=s.replace(key,str(value))
    return int(s)