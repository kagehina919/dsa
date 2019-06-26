s = abcabc

dict = {}

for i in range(0, len(s)):
    if s[i] not in dict:
        dict[s[i]] = 1
    else:
        print(s[i])
        break