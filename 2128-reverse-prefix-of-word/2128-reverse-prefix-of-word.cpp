class Solution {
public:
    string reversePrefix(string word, char ch) {

        int size=word.size();
        int right=0;

        while (right < size && word[right] != ch) {
            right++;
        }

        if (right < size) {
            int left = 0;
            while (left < right) {
                swap(word[left], word[right]);
                left++;
                right--;
            }
        }
        return word;
    }
};