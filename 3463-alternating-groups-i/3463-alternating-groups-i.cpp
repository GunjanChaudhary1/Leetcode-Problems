class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int n = colors.size();

        int count1 = 0;
        int count2 = 0;
        int start = 0;
        int k =3;

        for(int end=1; end<2*n; end++){
            if(colors[end%n] != colors[(end-1)%n]){
                if((end-start+1)>=k){
                    count2++;
                }
            }
            else{
                start = end;
            }

            if(end == n-1){
                count1 = count2;
            }
        }
        return count2-count1;
    }
};