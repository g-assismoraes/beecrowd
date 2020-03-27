varetas = input().split()
a = int(varetas[0])
b = int(varetas[1])
c = int(varetas[2])
d = int(varetas[3])

if abs(b - c) < a < b + c or abs(b - d) < a < b + d or abs(c - d) < a < c + d:
    print('S')
elif abs(a - c) < b < a + c or abs(a - d) < b < a + d or abs(c - d) < b < c + d:
    print('S')
elif abs(a - b) < c < a + b or abs(a - d) < c < a + d or abs(b - d) < c < b + d:
    print('S')
elif abs(a - b) < d < a + b or abs(a - c) < d < a + c or abs(b - c) < d < b + c:
    print('S')
else:
    print('N')
