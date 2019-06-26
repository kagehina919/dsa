import operator

int arr[] = [5,5,5,6,3,4,4,2,1]
n = len(arr)
dict = {}
for i in range(0, n):
    if(arr[i] in dict):
        dict(arr[i]) += 1
    else:
        dict(arr[i]) = 1

sorted_x = sorted(dict.items(), key=operator.itemgetter(1))

for i in range(0, len(sorted_x)):
    for j in range(0, sorted_x[i]):
        print(sorted_x[i])
    