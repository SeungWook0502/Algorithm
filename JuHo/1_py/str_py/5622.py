def convert(eng):
    if eng == 'A' or eng == 'B' or eng == 'C':
        return 2
    elif eng == 'D' or eng == 'E' or eng == 'F':
        return 3
    elif eng == 'G' or eng == 'H' or eng == 'I':
        return 4
    elif eng == 'J' or eng == 'K' or eng == 'L':
        return 5
    elif eng == 'M' or eng == 'N' or eng == 'O':
        return 6
    elif eng == 'P' or eng == 'Q' or eng == 'R' or eng == 'S':
        return 7
    elif eng == 'T' or eng == 'U' or eng == 'V':
        return 8
    elif eng == 'W' or eng == 'X' or eng == 'Y' or eng == 'Z':
        return 9
    else:
        return 0
    
time = 0  
word = input()
for i in range(len(word)):
    time += (convert(word[i])+1)
    
print(time)