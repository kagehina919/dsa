a = [10, 2, 3, 4, 5, 9, 7, 8]
k = 23
dict = {}

for i in range(0, 8):
    for j in range(1, 8):
        sum = a[i] + a[j]
        if sum not in dict:
            dict[sum] = 1
    if (k-sum) in dict:
        print("YES")
