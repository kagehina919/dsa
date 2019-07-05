# Main idea is to make a hash map of the characters in the string,
# or count the individual distinct chars in the string.
# We will have to add n-1 characters to the string to get the desired palindrome,
# where n is the current number of distinct chars in the string.

def main():
    a = input()
    n = len(a)
    dict = {}
    if a == reverse(a):
        print("0")
    else:
        for i in range(n):
            if a[i] in dict:
                dict(a[i]) += 1
            else:
                dict(a[i]) = 1
        b = len(dict)
        print(b-1)