class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int currentSum = 0;
        int minPrefixSum = 0;

        for (int num : nums) {
            currentSum += num;
            minPrefixSum = std::min(minPrefixSum, currentSum);
        }
        return 1 - minPrefixSum;
    }
};