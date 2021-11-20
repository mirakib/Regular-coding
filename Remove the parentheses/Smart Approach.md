Some best approach to solve this problem.



# Solution 1
```
import re

def remove_parentheses(s):
    while (t := re.sub(r'\([^()]*\)', '', s)) != s:
        s = t
    return s
```


# Solution 2
```
def remove_parentheses(s):
    while ')' in s:               # keep looping while there's still a )
        r = s.find(')')           # find index of first )
        l = s[:r+1].rfind('(')    # find index of closest ( left of )
        trash = s[l:r+1]          # define what is trash
        s = s.replace(trash, '')  # take out the trash
    return s
```


# Solution 3
```
import re
remove_parentheses = lambda s: remove_parentheses(re.sub(r"\(([^\(]*?)\)", "", s)) if re.search(r"\(([^\(]*?)\)", s) else s
```


# Solution 4
```
import re
def remove_parentheses(s):
    while '('in s:
        s=re.sub('\([^()]*\)','',s)
    return s
```
