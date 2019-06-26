arr = [-1, -3, 3, 0, 1]
dict = {}

sum = 0
count = 0
n = len(arr)
for i in range(0, n):
    sum += arr[i]
    if arr[i] is 0:
        count +=1
    if sum = 0:
        count += 1
    if sum in dict:
        count += 1
    else:
        dict[sum] = i

print(count)