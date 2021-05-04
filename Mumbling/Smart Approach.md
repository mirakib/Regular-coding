Some best approach to solve this problem.


# solution 1
```
def accum(s):
    return '-'.join(c.upper() + c.lower() * i for i, c in enumerate(s))
```    
    
    
    
# solution 2
```
def accum(s):
    return '-'.join((a * i).title() for i, a in enumerate(s, 1))
```    
    
    
    
 # solution 3
 ```
 def accum(s):
    output = ""
    for i in range(len(s)):
        output+=(s[i]*(i+1))+"-"
    return output.title()[:-1]
  ```  
    
    
    
 # solution 4
 ```
 accum = lambda s: "-".join(((i + 1) * char).capitalize() for i, char in enumerate(s))

```
