class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        
        vector<int> ans = colors;

        for(int i=0; i<colors.size(); i++){
            ans.push_back(colors[i]);
        }

        int count1 = 0;
        int count2 = 0;
        int start = 0;

        for(int end=1; end<ans.size(); end++){
            if(ans[end] != ans[end-1]){
                if((end-start+1)>=k){
                    count2++;
                }
            }
            else{
                start = end;
            }
            
            if(end == colors.size()-1){
                count1=count2;
            }
        }
        return count2-count1;
    }
};