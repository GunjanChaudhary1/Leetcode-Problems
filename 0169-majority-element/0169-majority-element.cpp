class Solution {
public:
    int majorityElement(vector<int>& nums) {

        std::unordered_map<int,int> freq_map;

        for(int num : nums){
            freq_map[num]++;

            if(freq_map[num] > nums.size()/2){
                return num;
            }
        }
        return -1;
    }
};