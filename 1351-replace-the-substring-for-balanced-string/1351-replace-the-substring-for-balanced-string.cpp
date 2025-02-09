class Solution {
public:
    int balancedString(string s) {

    
        int n = s.length();
        int ideal = n/4;

        map<char, int> freq;
        for(char word : s){
            freq[word]++;
        }
        
        if(freq['Q'] == ideal && freq['W'] == ideal && freq['E'] == ideal && freq['R'] == ideal){
            return 0;
        }

        int start = 0;
        int minLength = n;
        
        for(int end = 0; end<n; end++){
            freq[s[end]]--;

            while (freq['Q'] <= ideal && freq['W'] <= ideal && freq['E'] <= ideal && freq['R'] <= ideal) {
                minLength = min(minLength, end - start + 1);
                freq[s[start]]++; 
                start++;
            }
        }
        return minLength;
    }
};