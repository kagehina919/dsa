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

# inlist
n = int(input())
for i in range(n):
    s = input()
    s = list(s)
    def hackerrankInString(s):
        if __name__ == '__main__':
            counth = 0
            counta = 0
            countc = 0
            countk = 0
            counte = 0
            countr = 0
            countn = 0
            for i in s:
                if i == 'h':
                    counth += 1
                if i == 'a':
                    counta += 1
                if i == 'c':
                    countc += 1
                if i == 'k':
                    countk += 1
                if i == 'e':
                    counte += 1
                if i == 'r':
                    countr += 1
                if i == 'n':
                    countn += 1
            if(counta>=2 and counth>=1 and countc>=1 and counte>=1 and countk>=2 and countn>=1 and countr>=2):
                print('YES')
            else:print('NO')
    hackerrankInString(s)

# SOS 
s = input()
s = list(s)

# Complete the marsExploration function below.
def marsExploration(s):
    if __name__ == '__main__':
        count = 0
        for i in range(len(s)):
            a=i%3
            if(a==0 and s[i]!='S'):
                count += 1
            elif(a==1 and s[i]!='O'):
                count += 1
            elif(a==2 and s[i]!='S'):
                count += 1
            else:continue
        print(count)
marsExploration(s)

# insertionsort1
import sys

def insertionSort1(n, arr):
    a = arr[-1]
    i = n-2
    
    while (a < arr[i]) and (i >= 0):
        arr[i+1] = arr[i]
        print(' '.join(map(str, arr)))
        i -= 1
        
    arr[i+1] = a
    print(' '.join(map(str, arr)))
    
if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    insertionSort1(n, arr)

# Array Manipulation
def arrayManipulation(n, queries):
    if __name__ == '__main__':
        b = queries[0]
        c = queries[1]
        k = queries[2]
        if(c < n-1):
            for i in range(b, c+1):
                li[i] += k
        else:
            for i in range(b, c):
                li[i] += k
        return li
for i in range(a[1]):
    queries = input()
    queries = list(map(int, queries.split()))
    arrayManipulation(n, queries)
max = li[0]
for i in range(1, n):
    if(li[i] > max):
        max = li[i]
print(max)

#Mars Exploration
s = input()
s = list(s)

# Complete the marsExploration function below.
def marsExploration(s):
    if __name__ == '__main__':
        count = 0
        for i in range(len(s)):
            a=i%3
            if(a==0 and s[i]!='S'):
                count += 1
            elif(a==1 and s[i]!='O'):
                count += 1
            elif(a==2 and s[i]!='S'):
                count += 1
            else:continue
        print(count)
marsExploration(s)

# Array Sum
#!/bin/python3

import os
import sys

#
# Complete the simpleArraySum function below.
#
def simpleArraySum(ar):
    #
    # Write your code here.
    #

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = simpleArraySum(ar)

    fptr.write(str(result) + '\n')

    fptr.close()

#Big Sum
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the aVeryBigSum function below.
def aVeryBigSum(ar):

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = aVeryBigSum(ar)

    fptr.write(str(result) + '\n')

    fptr.close()

# Grading Students
#!/bin/python3

import os
import sys

#
# Complete the gradingStudents function below.
#
def gradingStudents(grades):
    #
    # Write your code here.
    #

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    grades = []

    for _ in range(n):
        grades_item = int(input())
        grades.append(grades_item)

    result = gradingStudents(grades)

    f.write('\n'.join(map(str, result)))
    f.write('\n')

    f.close()

# classes in c++
class Box{
    private:
    int l, b, h;
    public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    
    friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

# Stacks attempt-1
n = int(input())
a = []
for i in range(n):
    c = int(input())
    a.append(c)

for i in range(n):
    for j in range(i+1, n):
        if a[i]>a[j]:
            y = j
            break
    for k in range(y+1, n):
        if a[y]<a[k]:
            z = k
            break
    print(a[z], end = ' ')

# 1d array
a = int(input())
b = input()

lis = list(map(int, b.split()))

for i in range(a-1):
    if lis[i]>lis[i+1]:
        if lis[i]>lis[i-1]:
            print(lis[i], end = ' ')
print(lis[a-1])
