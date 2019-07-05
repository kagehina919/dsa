s = input()
s = s.split('.')
str = ''
for i in range(len(s), 0, -1):
    str[i-1] = s[i-1]
print(" ".join(str)) 