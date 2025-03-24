class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty()) return 0; 
    
        int index = 1;  
        int count = 1;  
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1; 
            }
            if (count <= 2) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;    
    }
};