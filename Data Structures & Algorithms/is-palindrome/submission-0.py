class Solution:
    def isPalindrome(self, s: str) -> bool:
        s_nospace = "".join(c.lower() for c in s if c.isalnum())
        i = 0
        j = len(s_nospace) - 1
        while i < j:
            if s_nospace[i] == s_nospace[j]:
                i += 1
                j -= 1
            else:
                return False
        return True