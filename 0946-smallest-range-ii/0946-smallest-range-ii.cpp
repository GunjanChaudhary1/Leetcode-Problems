class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int size = nums.size();
        
        int result = nums[size - 1] - nums[0];  
        
        for (int i = 0; i < size - 1; i++) {
            int high = max(nums[size - 1] - k, nums[i] + k);
            int low = min(nums[0] + k, nums[i + 1] - k);
            result = min(result, high - low);
        }
        return result;
    }
};
