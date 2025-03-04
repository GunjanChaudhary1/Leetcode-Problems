class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n=nums.size();

        int lessCount=0;
        int moreCount=0;
        int equalCount=0;

        for(auto num : nums){
            if(num==pivot) equalCount++;
            else if(num>pivot) moreCount++;
            else lessCount++;
        }

        vector<int> ans(n,0);

        int s = 0;
        int l = n-moreCount;
        int e = l-equalCount;

        for(int i=0; i<n; i++){
            int number = nums[i];

            if(number==pivot) ans[e++]=number;
            else if(number>pivot) ans[l++]=number;
            else ans[s++]=number;
        }
        return ans;
    }
};