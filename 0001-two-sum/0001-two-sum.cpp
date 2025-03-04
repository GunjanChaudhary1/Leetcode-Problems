class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, int> num_map;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(num_map.find(complement) != num_map.end()){
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
        // vector<int> answer;
        // int sum = 0;
        
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){

        //         sum = nums[i] + nums[j];

        //         if(sum==target){
        //             answer.push_back(i);
        //             answer.push_back(j);
        //         }
        //     }
        // }
        // return answer; 
    }
};