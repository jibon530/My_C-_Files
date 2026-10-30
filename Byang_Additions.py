def cheak(numa, numb, s):
    for i in range(s, -1, -1):
        if int(numa[i]) + int(numb[i]) > 9:
            return "Yes"
    return "No"

import sys
a, b = sys.stdin.readline().split()

n = max(len(a), len(b))
a = a.zfill(n)
b = b.zfill(n)
aa = list(a)
bb = list(b)
s = len(aa) - 1

print(cheak(aa, bb, s))