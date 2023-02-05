num = int(input("Enter the number of numbers to enter: "))
list1 = []
for i in range(0, num):
    print("Enter number({})".format(i+1), end=": ")
    list1.append(int(input()))

list2 = list(map(lambda x:x**2, list1))

for i in range(0, num):
    print("Square of {} is {}".format(list1[i], list2[i]))
