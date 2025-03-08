class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> freq;
        for (const string& str : arr){
            freq[str]++;
        }
        int distinctCount = 0;
        for (const string& str : arr){
            if (freq[str] == 1){
                distinctCount++;
                if (distinctCount == k){
                    return str;
                }
            }
        }
        return "";
    }
};