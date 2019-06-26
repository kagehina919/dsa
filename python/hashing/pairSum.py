a = [1,2,3,4,5]
b = [2,3,4,5,6]

n = len(a)
m = len(b)

k = 4
count = 0

dict = {}

for i in range(0, n):
    dict[a[i]] = 1
for i in range(0, m):
    if k-b[i] in dict:
        print(k-b[i], b[i])