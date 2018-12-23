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

# compare triplets
a = input()
b = input()
a = list(map(int, a.split()))
b = list(map(int, b.split()))
# Complete the compareTriplets function below.
def compareTriplets(a, b):
    if __name__ == '__main__':
        alice = 0
        bob = 0
        for i in range(3):
            if(a[i]>b[i]):
                alice += 1
            elif(b[i]>a[i]):
                bob += 1
        print(alice, bob)
compareTriplets(a, b)

# Records breaking
t = int(input())
scores = input()
scores = list(map(int, scores.split()))
score = []
len = 0
for i in scores:
  if i not in score:
    score.append(i)
    len += 1

# Complete the breakingRecords function below.
def breakingRecords(score):
    if __name__ == '__main__':
        count = 0
        cont = 0
        max = score[0]
        min = score[0]
        for i in range(len):
            if(score[i]>max):
                max = score[i]
                count += 1
            if(score[i]<min):
                cont += 1
                min = score[i]
        print(count, cont)
breakingRecords(score)

# Insert an element at a particular place in a linked list
def insertNodeAtPosition(head, data, position):
	root = head
	count = 0
	while(head is not NULL and count<(position-1)):
		head = head.next
		count += 1
	newN=SinglyLinkedListNode(data)
	temp = head.next
	head.next = newN
	newN.next = temp
	return root

# Delete a node
def deleteNode(head, position):
	root = head
	i = 0
	while(head is not NULL and i<(position-1)):
		head = head.next
		i += 1
	temp = head.next
	temp.next = newN
	newN = head.next
	return root

# print a linked list in reverse
def reversePrint(head):
	list = []
	while(head is not NULL):
		list.append(head.data)
		head = head.next
	list = list.reverse()
	print(list)

# divisible sum pairs
t = input()
t = list(map(int, t.split()))
n = t[0]
k = t[1]
ar = input()
ar = list(map(int, ar.split()))

# Complete the divisibleSumPairs function below.
def divisibleSumPairs(n, k, ar):
    if __name__ == '__main__':
        count = 0
        for i in range(n):
            for j in range(i+1, n):
                if((ar[i]+ar[j])%k==0):
                    count += 1
        print(count)
divisibleSumPairs(n, k, ar)

# IceCreamParlor problem
a = int(input())
for i in range(a):
    m=int(input())
    n = int(input())
    arr = input()
    arr = list(map(int, arr.split()))
    def icecreamParlor(m, arr):
        if __name__ == '__main__':
            for i in range(n):
                for j in range(i+1, n):
                    if(arr[j] + arr[i] == m):
                        print(i+1, j+1)
    icecreamParlor(m, arr)

# Sherlock and Arrays
t = int(input())

def balancedSums(arr):
    equal = False
    total = sum(arr)
    if(n == 1):
        equal = True
    else:
        for i in range(n):
            suma = 0
            sumb = 0
            for k in range(0, i):
                suma = suma + arr[k]
            for j in range(i+1, n):
                sumb = total-arr[i]-suma
            if(suma == sumb):
                equal = True
                break
    if(equal == True):
        print('YES')
    else:print('NO')
    

for i in range(t):
    n = int(input())
    arr = input()
    arr = list(map(int, arr.split()))
    balancedSums(arr)

# Intro Challenge
V = int(input())
n = int(input())
arr = input()
arr = list(map(int, arr.split()))

# Complete the introTutorial function below.
def introTutorial(V, arr):
    if __name__ == '__main__':
        for i in range(n):
            if(arr[i] == V):
                print(i)
introTutorial(V, arr)

# Big Sort
t = int(input())
unsorted = []
for i in range(t):
    n = int(input())
    unsorted.append(n)

# Complete the bigSorting function below.
def bigSorting(unsorted):
    if __name__ == '__main__':
        unsorted.sort()
        print(*unsorted, sep = "\n")

bigSorting(unsorted)

#Camelcase
s = input()
s = list(s)
# Complete the camelcase function below.
def camelcase(s):
    if __name__ == '__main__':
        n = len(s)
        count = 1
        upper = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    for i in s:
        if i in upper:
            count += 1
    print(count)
camelcase(s)
