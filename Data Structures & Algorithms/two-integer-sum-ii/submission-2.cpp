class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int to_search = target - numbers[i];

            if (numbers[j] == to_search) {
                return {i+1, j+1};
            } 
            else if (numbers[j] > to_search) {
                j--;
            } 
            else if (numbers[j] < to_search) {
                i++;
            }
        }
    }
};
