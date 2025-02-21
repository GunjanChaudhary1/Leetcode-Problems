class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int start = 0;
        int count = 0;
        int product = 1;
        
        for (int end = 0; end < nums.size(); end++) {
            product *= nums[end];

            while (product >= k && start <= end) {
                product /= nums[start];
                start++;
            }
            count += (end - start + 1);
        }
        return count;
    }
};