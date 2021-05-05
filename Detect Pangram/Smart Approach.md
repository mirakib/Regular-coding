Some best approach to solve this problem.



# Solution 1
```
import string

def is_pangram(s):
    return set(string.lowercase) <= set(s.lower())
```


# Solution 2
```
import string

def is_pangram(s):
    return set(string.ascii_lowercase).issubset(s.lower())
```


# Solution 3
```
def is_pangram(s):
    return True if set('abcdefghijklmnopqrstuvwxyz').issubset(set(s.lower())) else False
```
