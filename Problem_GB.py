import math
import sys
n = int(sys.stdin.readline())
odd_sum = n * n
pr = []
num = 2
while len(pr) < n:
    prime = True
    for j in range(2, int(math.sqrt(num)) + 1):
        if num % j == 0:
            prime = False
            break
    if prime:
        pr.append(num)    
    num += 1
pr_sum = sum(pr)
ans = abs(odd_sum - pr_sum)
print(ans)