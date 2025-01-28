class Solution {
public:
    int maxScore(string s) {

        int size = s.size();
        
        int totalOnes = 0;
        for (char c : s) {
            if (c == '1') {
                totalOnes++;
            }
        }
        
        int leftZeros = 0;
        int rightOnes = totalOnes;
        int maxScore = INT_MIN;
        
        for (int i = 0; i < size - 1; i++) {
            if (s[i] == '0') {
                leftZeros++;
            } else {
                rightOnes--;
            }
            maxScore = max(maxScore, leftZeros + rightOnes);
        }
        
        return maxScore;
    }
};
