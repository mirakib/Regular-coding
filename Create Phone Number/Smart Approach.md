Some best approach to solve this problem.



Solution 1
```
def create_phone_number(n):
    n = ''.join(map(str,n))
    return '(%s) %s-%s'%(n[:3], n[3:6], n[6:])
```


Solution 2
```
create_phone_number = lambda n: f"({n[0]}{n[1]}{n[2]}) {n[3]}{n[4]}{n[5]}-{n[6]}{n[7]}{n[8]}{n[9]}"
```


Solution 3
```
def create_phone_number(n):
    n = "".join([str(x) for x in n] )
    return("(" + str(n[0:3]) + ")" + " " + str(n[3:6]) + "-" + str(n[6:]))
```
