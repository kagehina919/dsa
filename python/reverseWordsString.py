s = input()
s = s.split('.')
str = ''
for i in range(len(s), 0, -1):
    str.append(s[i-1])
print(str)