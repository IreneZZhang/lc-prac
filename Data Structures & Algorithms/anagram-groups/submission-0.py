class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # group by number of letters then sort each string
        # {3: {idx: sortedword, idx: sortedword}}
        lowercase_list = [chr(a) for a in range(97,123)]

        word_map = {}
        for i in range(len(strs)):
            numchar_map = {}
            for letter in lowercase_list:
                count = strs[i].count(letter)
                numchar_map[letter] = count
            # Finish counting, convert to a tuple
            letter_pair = tuple(sorted(numchar_map.items()))

            if letter_pair not in word_map:
                word_map[letter_pair] = [strs[i]]
            else:
                word_map[letter_pair].append(strs[i])
        
        # Construct the final list
        output = []
        for value in word_map.values():
            output.append(value)
        return output