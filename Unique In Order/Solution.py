def unique_in_order(iterable):
    
    if len(iterable) == 0:
      return []
    else:
        unique = [iterable[0]]
        halt = [iterable[0]]
    
        for char in iterable:
            if char == halt[0]:
                continue
            elif char != halt[0]:
                unique.append(char)
        
            halt.clear()
            halt.append(char)
    
        return unique
    
