a = int(input())
ln = 1

while a > ln:
    a -= ln
    ln += 1
    
if ln % 2 == 0:
    x = a
    y = ln - a + 1
else:
    x = ln - a + 1
    y = a

print(x, y, sep='/')