class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum = 0;
        for(int num : nums){
            totalsum += num;
        }

        int target = totalsum - x;

        if(target < 0){
            return -1;
        }

        if(target == 0){
            return nums.size();
        }

        int sum = 0;
        int start = 0;
        int maxWindow = -1;
        
        for(int end = 0; end < nums.size(); end++){
            sum += nums[end];

            while(sum > target){
                sum -= nums[start];
                start++;
            }

            if(sum==target){
                maxWindow = max(maxWindow, end - start + 1);
            }
        }
        return maxWindow == -1 ? -1 : nums.size() - maxWindow;
    }
};