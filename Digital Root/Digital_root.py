def digital_root(n):

    num = str(n)
    total = 0
    root = num

    while len(str(root)) != 1:

        for digit in root:
            total += int(digit)

        root = str(total)
        total = 0

    return int(root)
