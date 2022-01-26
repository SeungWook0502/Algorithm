s=input().upper()
c=0
for i in s:
    if ord(i)<68:
        c+=3
    elif ord(i)<71:
        c+=4
    elif ord(i)<74:
        c+=5
    elif ord(i)<77:
        c+=6
    elif ord(i)<80:
        c+=7
    elif ord(i)<84:
        c+=8
    elif ord(i)<87:
        c+=9
    elif ord(i)<91:
        c+=10
print(c)