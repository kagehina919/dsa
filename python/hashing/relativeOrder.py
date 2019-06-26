import operator

arr1 = [1,2,3,2,3,4,1,8]
arr2 = [1,2,3,4]

dict = {}

for i in range(0, n):
    if(arr1[i] in dict):
        dict[arr1[i]] += 1
    else:
        dict[arr1[i]] = 1

for i in range(0, m):
    if(arr2[i] in dict):
        for j in range(0, dict(arr2[i])):
            print(arr2[i])
        dict.pop(arr2[i])
sorted_x = sorted(dict.items(), key=operator.itemgetter(0))

len = len(sorted_x)
for i in range(0, len):
    for j in range(0, sorted_x[i].values()):
        print(sorted_x[i])