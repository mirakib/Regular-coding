def disemvowel(string_):

    vowel_list = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']

    re_gen = []

    for letter in string_:
        if letter not in vowel_list:
            re_gen.append(letter)

    string_ = ""

    for letter in re_gen:
        string_ += letter

    return string_
