
class Solution {
public: 

bool canPartitionHelper(vector<int>& arr, int sum, int index, vector<vector<int>>& memo) {
    
    if (sum == 0) 
    return true;
    if (index >= arr.size() || sum < 0) 
    return false;
    
    if(memo[index][sum]!=-1)
    return memo[index][sum];

    bool include = canPartitionHelper(arr, sum - arr[index], index + 1, memo);
    bool exclude = canPartitionHelper(arr, sum, index + 1, memo);

   
    memo[index][sum] = include || exclude;
    return memo[index][sum];
}

bool canPartition(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    if (totalSum % 2 != 0) return false;

    int sum = totalSum / 2;
    
    vector<vector<int>> memo(arr.size(), vector<int>(sum + 1, -1));

    return canPartitionHelper(arr, sum, 0, memo);
}

int main() {
    vector<int> arr = {1, 5, 11, 5,4};

    if (canPartition(arr)) {
        cout << "The set can be partitioned into two subsets of equal sum." << endl;
    } else {
        cout << "The set cannot be partitioned into two subsets of equal sum." << endl;
    }

    return 0;
}
        
    
};