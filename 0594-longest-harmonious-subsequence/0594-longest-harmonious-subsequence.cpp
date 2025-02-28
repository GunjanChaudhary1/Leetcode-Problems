class Solution {
public:
    int findLHS(vector<int>& nums) {

        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
    
        int maxLength = 0;
        for (auto& entry : freq) {
            int num = entry.first;
        
            if (freq.find(num + 1) != freq.end()) {
                maxLength = max(maxLength, freq[num] + freq[num + 1]);
            }
        }
        return maxLength;
    }
};