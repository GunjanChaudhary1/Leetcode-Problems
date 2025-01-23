class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int p = 0;
        int q = 0;

        while(q < length){
            if(nums[q] != 0){
                swap(nums[p],nums[q]);
                q++;
                p++;  
            }
            else{
                q++;
            }
        }
    }
};