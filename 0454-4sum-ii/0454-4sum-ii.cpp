class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> map;
        int count = 0;

        for(int a : nums1){
            for(int b : nums2){
                int sum = a + b; 
                map[sum]++;
            }
        }

        for(int c : nums3){
            for(int d : nums4){
                int sum = c + d;
                if(map.find(-sum) != map.end()){
                    count += map[-sum];
                }
            }
        }
        return count;
    }
};