Some best approach to solve this problem.

```
# solution 1

def disemvowel(s):
    return s.translate(None, "aeiouAEIOU")
    



# solution 2

def disemvowel(string):
    return "".join(c for c in string if c.lower() not in "aeiou")
    



# solution 3

def disemvowel(s):
    for i in "aeiouAEIOU":
        s = s.replace(i,'')
    return s
```
