class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # group by number of letters then sort each string
        # {3: {idx: sortedword, idx: sortedword}}
        lowercase_list = [chr(a) for a in range(97,123)]

        word_map = {}
        for i in range(len(strs)):
            numchar_map = {}
            # for letter in lowercase_list:
            #     count = strs[i].count(letter)
            #     numchar_map[letter] = count
            # Finish counting, convert to a tuple
            # letter_pair = tuple(sorted(numchar_map.items()))

            count = [0] * 26
            for char in strs[i]:
                count[ord(char) - ord("a")] += 1
            key = tuple(count)
            if key not in word_map:
                word_map[key] = [strs[i]]
            else:
                word_map[key].append(strs[i])
        
        # Construct the final list
        output = []
        for value in word_map.values():
            output.append(value)
        return output