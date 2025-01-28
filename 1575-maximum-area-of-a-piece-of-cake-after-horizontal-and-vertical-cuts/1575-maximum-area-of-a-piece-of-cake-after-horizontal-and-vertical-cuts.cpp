class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {

        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());


        int maxWidth = max(verticalCuts[0]-0,w-verticalCuts[verticalCuts.size()-1]);
        for(int i=1; i<verticalCuts.size(); i++){
            maxWidth =  max(maxWidth, verticalCuts[i] - verticalCuts[i-1]);
        }

        int maxHeight = max(horizontalCuts[0]-0,h-horizontalCuts[horizontalCuts.size()-1]);;
        for(int i=1; i<horizontalCuts.size(); i++){
            maxHeight = max(maxHeight, horizontalCuts[i] - horizontalCuts[i-1]);
        }

        const int MOD = 1e9 + 7;
        long long area = (long long)maxHeight * maxWidth;
        return area % MOD;
    }
};