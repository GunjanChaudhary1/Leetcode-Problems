class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    
       // unordered_map<int, int> remainderCount;
        vector<int> remainderCount(k, 0);
        remainderCount[0]=1;
        int sum=0;
        int result=0;

        for(int num:nums){
            sum += num;
            int remainder = sum % k;

            if(remainder<0){
                remainder += k;
            }
            result += remainderCount[remainder];
            remainderCount[remainder]++;
        }
        return result;    
    }
};