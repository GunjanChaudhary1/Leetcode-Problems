class Solution {
public:

    void reverseStringHelper(vector<char>& s, int left, int right){
            
        if (left >= right) return;
        swap(s[left], s[right]);
        reverseStringHelper(s, left + 1, right - 1);
    
    }
    void reverseString(vector<char>& s) {
        reverseStringHelper(s, 0, s.size()-1);

        // int n=s.size();
        // int left=0;
        // int right=n-1;

        // while(left<right){
        //     swap(s[left], s[right]);
        //     left++;
        //     right--;
        // }
        
    }
};