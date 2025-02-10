class Solution {
public:
    string clearDigits(string s) {
        int i = 0;
        
        while (i < s.length()) {
            if (isdigit(s[i])) { 
                s.erase(i,1); 
                if(i>0){
                    s.erase(i - 1,1);
                    i=i-1;
                }
            } 
            else {
                i++; 
            }
        }
        return s;
    }
};
