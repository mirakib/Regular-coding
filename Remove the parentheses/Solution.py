def remove_parentheses(s):
    bracket = ""
    new = ""
    count = 0
    for char in s:
        if char == "(":
            bracket = "("
            count += 1
        elif char == ")":
            bracket = ""
            count -= 1
        elif bracket != "(" and count == 0:
            new += char

    return new
