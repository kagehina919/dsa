a = [1,2,3,4,5,6]
n = len(a)
dict = {}
list = []
for i in range(0, n-k):
    count = 0
    for j in range(i, i+k):
        if a[i] not in list:
            list.append(a[i])
            count += 1
    dict[count] = 1
    list.clear()

for key in dict:
    print(key)