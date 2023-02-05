str1 = input("Enter string1: ")
str2 = input("Enter string2: ")

for i in range(0, len(str1)):
    if str1[i] == 'A':
        str1 = str1[0:i] + 'a' + str1[i+1:]

for i in range(0, len(str2)):
    if str2[i] == 'A':
        str2 = str2[0:i] + 'a' + str2[i+1:]
        
str3 = str1 + str2

print(str3)