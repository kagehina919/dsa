a = [1,2,3,4]
b = [1,2,3,4,5,6,7]

n = len(a)
m = len(b)
len = 0

dict = {}

for i in range(0, m):
    dict[b[i]] = 1
for i in range(0, n):
    if a[i] in dict:
        len += 1
if len == n:
    print("YES")
else:
    print("NO")
