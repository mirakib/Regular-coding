def is_pangram(s):
    pangram = ""

    for i in s:
        if i.isalpha():
            pangram += i

    result = len(set(pangram.lower()))

    if result == 26:
        return True
    else:
        return False
