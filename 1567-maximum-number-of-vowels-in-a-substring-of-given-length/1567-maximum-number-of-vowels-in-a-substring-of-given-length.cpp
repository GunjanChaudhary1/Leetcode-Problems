class Solution {
public:
    int maxVowels(string s, int k) {

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int maxVowelCount = 0;
        int currentVowelCount = 0;

        for (int i = 0; i < k; ++i) {
            if (vowels.find(s[i]) != vowels.end()) {
                currentVowelCount++;
            }
        }
        maxVowelCount = currentVowelCount;

        for (int i = k; i < s.length(); ++i) {
            if (vowels.find(s[i - k]) != vowels.end()) {
                currentVowelCount--;
            }
            if (vowels.find(s[i]) != vowels.end()) {
                currentVowelCount++;
            }
            maxVowelCount = max(maxVowelCount, currentVowelCount);
        }
       return maxVowelCount;
    }
};