def solution(new_id):
    answer = ''
    step1=new_id.lower()
    for ch in step1:
        if ch.isalpha() or ch.isdigit() or ch in ['-','_','.']:
            answer+=ch
    while '..' in answer:
        answer=answer.replace('..','.')
    answer=answer.strip('.')
    if not answer:
        answer='a'
    if len(answer) > 15:
        answer=answer[:15]
        if answer[-1] == '.':
            answer=answer[:-1]
    elif len(answer) < 3:
        while len(answer) < 3:
            answer+=answer[-1]
    return answer