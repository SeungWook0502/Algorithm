def solution(N, stages):
    answer = []

    stg_base = dict(zip(range(1,N+1), [0]*N))

    stages.sort()

    for i in stages:
        if i in stg_base:
            stg_base[i]+=1
    for i in stg_base:
        t = len(list(filter(lambda x : x>=i, stages)))
        if t!=0:
            stg_base[i] = stg_base[i]/t
        else:
            stg_base[i] = 0

    stg_base = sorted(stg_base.items(), key=(lambda x:x[1]), reverse = True)

    return [stg_base[i][0] for i in range(len(stg_base))]

N = 6
stages = [4,4,4,4,4]
a = solution(N, stages)
print(a)