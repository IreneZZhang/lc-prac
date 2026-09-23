class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)):
            return False
        
        # Construct hashsets
        s_map = {}
        t_map = {}
        for i in range(len(s)):
            if s[i] not in s_map:
                s_map[s[i]] = 1
            else:
                s_map[s[i]] += 1
            if t[i] not in t_map:
                t_map[t[i]] = 1
            else:
                t_map[t[i]] += 1
    
        for letter in s_map.keys():
            if letter not in t_map.keys():
                return False
            if s_map[letter] != t_map[letter]:
                return False
        return True
