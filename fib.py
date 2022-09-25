import time

t1 = time.time()
def fibonacci(n):
    f = [0, 1]
    for i in range(2, n+1):
        f.append(f[i-1] + f[i-2])
    return f[n]
for i in range(101):
    print(fibonacci(i),end=" ")
t2 = time.time()
print(t2-t1)