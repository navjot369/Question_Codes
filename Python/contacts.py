# Program to make contacts.

dict_name = {}
while True:
    print()
    print("Commands:\nA for Add, D for Delete, E for Edit, P for viewing all contacts, S for Search and Q for Quit.")
    command = input("Enter command:")
    if command == "A":
        name = input("Enter first name:")
        phone = int(input("Enter phone number:"))
        dict_name[name] = phone
    elif command == "D":
        name = input("Enter name to delete:")
        if name in list(dict_name.keys()):
            del dict_name[name]
        else:
            print("No person with this name found.")
    elif command == "E":
        name = input("Enter the name to edit:")
        if name not in list(dict_name.keys()):
            print("No person with this name found.")
        else:
            what = input("Edit Name(N) or phone number(P):")
            if what == "N":
                new_name = input("Enter the new name:")
                dict_name[new_name] = dict_name[name]
                del dict_name[name]
            elif what == "P":
                new_phone = int(input("Enter the new phone number:"))
                dict_name[name] = new_phone
            else:
                print("Invalid response.")
    elif command == "P":
        c = 1
        print("{:^8}{:^25}{:^25}".format("Serial", "Name", "Phone"))
        for i, j in dict_name.items():
            print("{:^8d}{:^25}{:^25}".format(c, i, j))
            c += 1
    elif command == "S":
        name = input("Enter name to search:")
        if name in list(dict_name.keys()):
            print("Name : {}    \nPhone number: {}".format(name, dict_name[name]))
        else:
            print("No person with this name found.")
    elif command == "Q":
        break
    else:
        print("Invalid command.")
print("Program end.")
