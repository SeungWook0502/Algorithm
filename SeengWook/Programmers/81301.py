def solution(s):
	stnum = {'zero':'0',
	'one':'1',
	'two':'2',
	'three':'3',
	'four':'4',
	'five':'5',
	'six':'6',
	'seven':'7',
	'eight':'8',
	'nine':'9'}

	answer = ''
	temp = ''

	for el in s:
		if not el.isdigit():
			temp+=el
			if temp in stnum:
				answer+=stnum[temp] 
				temp=''
		else:
			answer+=el

	return int(answer)


b = "one4seveneight"
a = solution(b)
print(a)