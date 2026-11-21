class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cur_num;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                cur_num = nums[i];
            }
            else {
                cur_num ^= nums[i];
            }
            
        }
        
        return cur_num;
    }
};
