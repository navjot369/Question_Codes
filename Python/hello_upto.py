list = ['h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd']
str1 = ""

for i in list:
    for j in "abcdefghijklmnopqrstuvwxyz":
        print(str1, end="")
        print(j)
        if (j==i):
            str1 += i
            break
