class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> seen, repeated;
        int n = s.length();
        const int L = 10;  

        for (int i = 0; i <= n - L; ++i) {
            string substr = s.substr(i, L);
            if (seen.count(substr)) {
                repeated.insert(substr);
            } else {
                seen.insert(substr);
            }
        }
        return vector<string>(repeated.begin(), repeated.end());  
    }
};