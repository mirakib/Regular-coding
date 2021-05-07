Some best approach to solve this problem.



# Solution 1
```
def to_camel_case(s):
    return s[0] + s.title().translate(None, "-_")[1:] if s else s
```


# Solution 2
```
import re
def to_camel_case(text):
    return re.sub('[_-](.)', lambda x: x.group(1).upper(), text)
```


# Solution 3
```
def to_camel_case(text):
    return text[:1] + text.title()[1:].replace('_', '').replace('-', '')
```
# Solution 4

```
def to_camel_case(text):
    return text[0] + ''.join([w[0].upper() + w[1:] for w in text.replace("_", "-").split("-")])[1:] if text else ''
```
