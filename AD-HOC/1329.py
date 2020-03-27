r = int(input())
while r != 0:
	qte = map(int, input().split())
	m = 0
	j = 0
	for v in qte:
		if v == 0:
			m += 1
		elif v == 1:
			j += 1
	print("Mary won %d times and John won %d times" %(m,j))
	r = int(input())
