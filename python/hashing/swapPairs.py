arr1 = [1,2,3,4,5]
arr2 = [3,4,5,6,7,8]

n = len(arr1)
m = len(arr2)

sum1 = 0
sum2 = 0

dict = {}

for i in range(0, n):
    sum1 += arr1[i]
for j in range(0, m):
    sum2 += arr2[j]
if sum1>sum2:
    diff = (sum1-sum2)/2
else diff = (sum2-sum1)/2
if n<m:
    for i in range(0, n):
        dict[arr1[i]] = 1
    for i in range(0, len(dict)):
        if arr2[i]+diff in dict:
            print(arr2[i], arr2[i]+diff)
else:
    for i in range(0, m):
        dict[arr2[i]] = 1
    for i in range(0, len(dict)):
        if arr1[i]+diff in dict:
            print(arr1[i], arr1[i]+diff)

