# The main idea here will be to count all the distinct characters in the given string
# We will focus on creating a hash map to store distinct characters,
# and then return the length of the dictionary to get the final result

s = input()
dict = {}
n = len(s)
for i in range(0, n):
    if s[i] not in dict:
        dict(s[i]) = 1
    else:
        dict(s[i]) += 1
m = len(dict)
print(m)