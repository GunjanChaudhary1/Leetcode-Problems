class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        std::unordered_map<int,int> freq_map;
        for(int num : nums){
            freq_map[num]++;
        }

        std::vector<int> result;
        for(auto & pair:freq_map){
            if(pair.second > nums.size()/3){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};