def to_camel_case(text):
    if text == "":
        return ""
      
    else:
        string = ""
        for char in text:
          
            if char.isalpha():
                string += char
            else:
                string += "@"
                
        text = string.split("@")
        string = "" + text[0]
        
        for i in range(1, len(text)):
          string += text[i].title()
          
        return string
      
