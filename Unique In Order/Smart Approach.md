Some best approach to solve this problem.

# Solution 1

```
from itertools import groupby

def unique_in_order(iterable):
    return [k for (k, _) in groupby(iterable)]
```

# Solution 2

```
unique_in_order = lambda l: [z for i, z in enumerate(l) if i == 0 or l[i - 1] != z]
```

# Solution 3

```
def unique_in_order(iterable):
    return [ ch for i, ch in enumerate(iterable) if i == 0 or ch != iterable[i - 1] ]
```
