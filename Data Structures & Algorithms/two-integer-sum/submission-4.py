class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Hashmap
        val2idx = {}
        for i in range(len(nums)):
            if nums[i] not in val2idx:
                val2idx[nums[i]] = [i]
            else:
                val2idx[nums[i]].append(i)
        
        for x in range(len(nums)):
            to_find = target - nums[x]
            # need to handle case when the element is not available
            for idx in val2idx.get(to_find, []): 
                if idx != x:
                    return [x, idx]