class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq_map = {}
        for i in range(len(nums)):
            if nums[i] not in freq_map.keys():
                freq_map[nums[i]] = 1
            freq_map[nums[i]] += 1

        sorted_desc = sorted(freq_map.items(), \
        key=lambda item: item[1], reverse=True)
        topk = []
        for i in range(k):
            topk.append(sorted_desc[i][0])
        return topk