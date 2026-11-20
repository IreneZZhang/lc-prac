class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix = {1};
        vector<int> suffix = {1};
        vector<int> output;
        if (nums.size() == 0) {
            return nums;
        }
        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(prefix[i-1] * nums[i-1]);
            int back_idx = nums.size() - i;
            suffix.insert(suffix.begin(), nums[back_idx] * suffix[0]);
        }

        for(int i = 0; i < nums.size(); i++) {
            output.push_back(prefix[i] * suffix[i]);
        }

        return output;
    }
};
