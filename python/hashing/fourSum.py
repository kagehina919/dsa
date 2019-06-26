a = [10, 2, 3, 4, 5, 9, 7, 8]
k = 23
dict = {}

for i in range(0, 5):
    for j in range(1, 6):
        for k in range(2, 7):
            for l in range(3, 8):
                sum = a[i] + a[j] + a[k] + a[l]
                if sum is k:
                    if (a[i], a[j], a[k], a[l]) not in dict:
                        dict[(a[i], a[j], a[k], a[l])] = 1

for key in dict:
    print(key)

