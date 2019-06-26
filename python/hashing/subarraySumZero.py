arr[] = [-1, -3, 3, 0, 1]
dict = {}

sum = 0
leng = 0
n = len(arr)
for i in range(0, n):
    sum += arr[i]
    if arr[i] is 0 and leng = 0:
        leng +=1
    if sum = 0:
        leng += 1
    if sum in dict:
        leng = max(leng, i-dict[sum])
    else:
        dict[sum] = i

print(leng)