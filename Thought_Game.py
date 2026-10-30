import sys
t = int(sys.stdin.readline())
for _ in range(t):
	a,b = map(int,sys.stdin.readline().split())
	avg = (a+b) // 2
	if(avg % 2 == 0):
		print("Sadia will be happy.")
	else:
		print("Oops!")