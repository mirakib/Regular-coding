num = 9

list_ = [x for x in range(1, num + 1)]

for value in list_:

    for space in range(value - 1):
        print(" ", end=" ")

    if value != num:
        print(" {}".format(str(value)) * (2 * (9 - value)))
    elif value == 9:
        print(value)
