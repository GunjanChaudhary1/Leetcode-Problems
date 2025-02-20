class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int window_sum = 0;

        for (int i = 0; i < k; ++i) {
            window_sum += arr[i];
        }

        int count = 0;
            if (window_sum / k >= threshold) {
            count++;
        }

        for (int i = k; i < arr.size(); ++i) {
            window_sum += arr[i] - arr[i - k];
            if (window_sum / k >= threshold) {
                count++;
            }
        }
        return count;
    }
};