class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> freqMap;
        int count=0;

        for(int num:nums){
            count += freqMap[num];
            freqMap[num]++;
        }
        return count;
    }
};