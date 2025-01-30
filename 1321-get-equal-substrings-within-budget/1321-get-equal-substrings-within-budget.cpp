class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {

        int start = 0;
        int end = 0;
        int cost = 0;
        int maxwindow = 0;

        while(end<s.length()){
            cost += abs(s[end] - t[end]);

            while(cost>maxCost){
                cost -= abs(s[start] - t[start]);
                start++;
            }
            maxwindow = max(maxwindow, (end-start+1));
            end++;
        }
        return maxwindow;
    }
};