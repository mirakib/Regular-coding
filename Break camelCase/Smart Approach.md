Some best approach to solve this problem.



# Solution 1
```
def solution(s):
    return ''.join(' ' + c if c.isupper() else c for c in s)

```


# Solution 2
```
import re
def solution(s):
    return re.sub('([A-Z])', r' \1', s)
```


# Solution 3
```
def solution(string):
    return ''.join((char if char.islower() else ' ' + char) for char in string)
```
