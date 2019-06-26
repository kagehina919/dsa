a = [1,2,3,0,4,-1]
dict = {}
n = len(a)
for i in range(0, n):
    dict[a[i]] = 1

ans = 0

for i in range(0, n):
    if a[i]-1 not in dict:
        ans = 1
        j = a[i]
        while(j in dict):
            j+=1
            ans = max(ans, j-a[i])

print(ans)
