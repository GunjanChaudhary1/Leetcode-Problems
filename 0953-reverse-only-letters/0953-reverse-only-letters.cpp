class Solution {
public:
    string reverseOnlyLetters(string s) {

        int size=s.size();
        int left=0;
        int right=size-1;
        
        while (left < right) {
            if (!isalpha(s[left])) {
                left++;
                continue;
            }
            if (!isalpha(s[right])) {
                right--;
                continue;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};