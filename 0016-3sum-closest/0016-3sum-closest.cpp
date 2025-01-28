class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        int closestSum = 0;
        int diff = INT_MAX;

        for (int i = 0; i < size - 2; i++) {
            int j = i + 1;       
            int k = size - 1;    

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int currentDiff = (target - sum);

                if(sum==target){
                    return sum;
                }

                if (abs(currentDiff) < diff) {
                    diff = abs(currentDiff);
                    closestSum = sum;
                }

                if (sum < target) {
                    j++; 
                } else {
                    k--;  
                }
            }
        }
        return closestSum;
    }
};
