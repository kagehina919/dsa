a = [1,2,3,4]
b = [1,2,3,5,6]
c = [1,2,3,4,7,8]

N1 = len(a)
N2 = len(b)
N3 = len(c)
dict = {}

for i in range(0, N1):
    if a[i] in b and a[i] in c:
        if a[i] not in dict:
            dict[a[i]] = 1
        else:
            dict[a[i]] += 1

for key in dict:
    print(key)