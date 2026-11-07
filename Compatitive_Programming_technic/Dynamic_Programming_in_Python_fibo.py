import sys

def fibo(n):
    if(n == 0 or n == 1):
        return n
    num = [0] * (n+1)
    num[0] = 0
    num[1] = 1
    for i in range(2,n+1):
        num[i] = num[i-1] + num[i-2]
    return num[n]

n = int(sys.stdin.readline())

print(f"Fibonacci number is: {fibo(n-1)}")