def narcissistic(value):
    num = str(value)
    list_ = []
    total = 0

    num_of_digit = len(num)

    for digit in num:
        list_.append((int(digit) ** num_of_digit))

    for nums in list_:
        total += nums

    if total == value:
        return True
    else:
        return False
