class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int mid;
        bool found = false;
        
        // Binary search to find one occurrence of the target
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                found = true;
                break;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        if (!found) return {-1, -1}; // Target not found

        // Finding the first and last position
        int left = mid, right = mid;
        while (left >= 0 && nums[left] == target) left--;
        while (right < nums.size() && nums[right] == target) right++;

        return {left + 1, right - 1};
    }
};