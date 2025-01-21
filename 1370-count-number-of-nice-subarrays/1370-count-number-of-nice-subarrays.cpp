class Solution {
public:
    int CountFunction(vector<int>& nums, int k) {

        int start = 0;
        int end = 0;
        int count = 0;

        while (end < nums.size()) {
             if (nums[end] % 2 == 1) {
                k--;
            }

            while(k < 0) {
                if (nums[start] % 2 == 1) {
                    k++;
                }
                start++;
            }
            count += (end - start + 1);
            end++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return CountFunction(nums,k) - CountFunction(nums,k - 1);
    }
};