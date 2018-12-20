# Alternate elements of 2D array added
t = input()
t = list(map(int, t.split()))
print(t[0]+t[2]+t[4]+t[6]+t[8])
print(t[1]+t[3]+t[5]+t[7])

# potion finder
a =input()
sum = 0;
a =list(a)
for i in range(len(a)):
    sum += (int(a[i]) * (i+1))
if (sum%11)==0:
    print("Legal ISBN") 
else:print("Illegal ISBN")

# birthday candles
n = int(input())
ar = input()
# Complete the birthdayCakeCandles function below.
def birthdayCakeCandles(ar):
    ar = list(map(int, ar.split()))
    max = ar[0]
    count=0
    for i in range(n):
        if ar[i]>max:
            max=ar[i]
    for i in range(n):
        if ar[i]==max:
            count += 1
    print(count)
