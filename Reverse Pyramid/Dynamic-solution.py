# this code excutes the same but take user input to proceed

num = int(input())

list_ = [x for x in range(1, num + 1)]

for value in list_:

    for space in range(value - 1):
        print(" ", end=" ")

    if value != num:
        print(" {}".format(str(value)) * (2 * (num - value)))
    elif value == num:
        print(value)
