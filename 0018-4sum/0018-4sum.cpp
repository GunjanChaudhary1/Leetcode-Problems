class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        int size = nums.size();

        if (size < 4) {
            return result;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size - 3; i++) {
            // Skip duplicate values for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < size - 2; j++) {
                // Skip duplicate values for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int l = j + 1, k = size - 1;

                while (l < k) {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[k];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[l], nums[k]});
                        
                        while (l < k && nums[l] == nums[l + 1]) l++;
                        while (l < k && nums[k] == nums[k - 1]) k--;

                        l++;
                        k--;
                    } else if (sum < target) {
                        l++;
                    } else {
                        k--;
                    }
                }
            }
        }

        return result;
    }
};
