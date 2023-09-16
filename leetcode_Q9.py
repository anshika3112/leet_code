class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        t = x
        rev = 0
        while x > 0:
            
            a = x % 10
            rev = rev * 10 + a
            x = x // 10
        return t == rev
