class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashnums;
        for (int num: nums) {
            hashnums.insert(num);
        }

        int max_len = 0;

        for (int num: hashnums) {
            if (hashnums.contains(num - 1)) {
                // not the start of the set
                continue;
            }

            // Else, start of the set
            int cur_num = num;
            int cur_seq = 0;
            while (hashnums.contains(cur_num)) {
                cur_seq++;
                cur_num++;
            }

            if (cur_seq > max_len) {
                max_len = cur_seq;
            }
        }

        return max_len;
    }
};
