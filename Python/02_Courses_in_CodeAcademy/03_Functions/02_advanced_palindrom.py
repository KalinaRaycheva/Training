import re

def checkPalindrome(s):
    result = re.sub(r'[^\w]', '', s).lower()
    if(result == result[::-1]):
        return True
    return False


print(checkPalindrome("as b@Sa"))