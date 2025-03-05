class Solution {
public:
    string customSortString(string order, string s){

        unordered_map<int, int> freq;

        for(char num : s){
            freq[num]++;
        }

        string result="";
        for(char num : order){
            if(freq.find(num) != freq.end()){
                result += string(freq[num], num);
                freq.erase(num);
            }
        }
        for (auto& entry : freq) {
            result.append(entry.second, entry.first);
        }
        return result;
    }
};