class Solution {
public:
    string reverseWords(string s) {

        int size=s.size();
        int left=0; 
        
        for(int right=0; right<=size; right++){
            if(right==size || s[right]==' '){
                int wordEnd = right-1;
                while (left < wordEnd) {
                    swap(s[left], s[wordEnd]);
                    left++;
                    wordEnd--;
                }
                left = right + 1;
            }
        }
        return s;
    
    }
};