def main():
    n = int(input())
    arr = []
    dict = {}
    
    for i in range(n):
        m = int(input())
        for j in range(m):
            arr[j] = int(input())
        for k in range(m):
            sum = arr[k]*arr[k]
            dict[sum] = 1
        for h in range(m):
            for j in range(h+1, m):
                max = arr[h]*arr[h] + arr[j]*arr[j]
                if max in dict: 
                    print("YES")
                    return 0
        print("NO")
            