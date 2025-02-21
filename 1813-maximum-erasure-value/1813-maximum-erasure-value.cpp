class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_set<int> uniqueSet;
        int n = nums.size();
        int left = 0;
        int right = 0;
        int currSum = 0;
        int maxSum = 0;

        while (right < n) {

            while (uniqueSet.find(nums[right]) != uniqueSet.end()) {
                uniqueSet.erase(nums[left]); 
                currSum -= nums[left];  
                left++;
            }
            uniqueSet.insert(nums[right]);
            currSum += nums[right];

            maxSum = max(maxSum, currSum);
            right++;
        }

        return maxSum;
    }
};
