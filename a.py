a = 0
for c in range(40):
    b = input().replace(',','.')
    print(float(b))
    a += (float(b) - 1.325)**2
    print('a:',a)
print('resultado:',a/40)

