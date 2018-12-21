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
