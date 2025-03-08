class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> countMap;
        for (int num : arr) {
            countMap[num]++;
        }

        unordered_set<int> seenCounts;
        for (const auto& entry : countMap) {
            if (seenCounts.find(entry.second) != seenCounts.end()) {
                return false;
            }
            seenCounts.insert(entry.second);
        }
        return true;
    }
};