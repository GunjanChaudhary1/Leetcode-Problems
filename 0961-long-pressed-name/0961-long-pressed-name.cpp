class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0; 
    
        while (j < typed.size()) {
            if (i < name.size() && name[i] == typed[j]) {
                i++; 
            } else if (j > 0 && typed[j] == typed[j - 1]) {
            } else {
                return false; 
            }
            j++;
        }
        return i == name.size();
    }
};