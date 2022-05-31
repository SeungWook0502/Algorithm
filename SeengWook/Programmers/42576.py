import collections

def solution(participant, completion):

    dict1, dict2 = {}, {}
    dict1 = collections.Counter(participant)
    dict2 = collections.Counter(completion)
    a = dict1-dict2
    return list(a.keys())[0]

    # if(len(set(participant)) == len(participant)):
    #     return list(set(participant) - set(completion))[0]
    # else:
    #     for pro in participant:
    #         if pro not in completion:
    #             return pro
    #         else:
    #             completion.remove(pro)


participant = ["mislav", "stanko", "mislav", "ana"]
completion = ["stanko", "ana", "mislav"]    

a = solution(participant, completion)
print(a)