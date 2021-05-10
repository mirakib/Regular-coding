def solution(s):
    output = ""
    for char in s:
        if char.isupper():
            output += " " + char
        else:
            output += char
            
    return output
