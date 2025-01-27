class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int size = people.size();

        int count = 0;
        int sum = 0;
        int i = 0;
        int j = size-1;
        sort(people.begin(), people.end());
        

        while(i<=j){

            sum = people[i] + people[j];
            if(sum <= limit){
                count++;
                i++;
                j--;
            }
            else{
                count++;
                j--;
            }
        }
        return count;
    }
};