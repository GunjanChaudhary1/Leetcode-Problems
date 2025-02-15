class Solution {
public:
    int removePalindromeSub(string s) {

        int size = s.size();
        int left =0;
        int right =size-1;

        while (left < right) {
            if (s[left] != s[right])
                return 2; 
            left++;
            right--;
        }
        return 1;
    }
};