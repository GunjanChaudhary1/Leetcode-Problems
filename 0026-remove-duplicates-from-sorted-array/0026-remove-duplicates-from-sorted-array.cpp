class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int size = nums.size();
        int p = 0;
        int q = 0;

        while(q < size-1){
            if(nums[q] != nums[q+1]){
                nums[p] = nums[q];
                p++;
                q++;
            }
            else{
                q++;
            } 
        }

        nums[p] = nums[q];
            p++;
            
        return p;
    }
};