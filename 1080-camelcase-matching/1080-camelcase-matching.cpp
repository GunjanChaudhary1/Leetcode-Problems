class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {

        vector<bool> result;
        for (string &query : queries) {
            int i = 0; 
            bool matches = true;
            
            for (char c : query) {
                if (i < pattern.size() && c == pattern[i]) {
                    i++;
                } else if (isupper(c)) {
                    matches = false; 
                    break;
                }
            }
            result.push_back(matches && i == pattern.size());
        }
        return result;
    }
};