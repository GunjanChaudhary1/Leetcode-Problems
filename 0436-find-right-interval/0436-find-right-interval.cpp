class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int, int>> starts; // {start, index}

        // Store start points with their original indices
        for (int i = 0; i < n; ++i) {
            starts.push_back({intervals[i][0], i});
        }

        // Sort based on start value
        sort(starts.begin(), starts.end());

        vector<int> result(n, -1);
        
        for (int i = 0; i < n; ++i) {
            int target = intervals[i][1];

            // Binary search to find the smallest start >= end
            int l = 0, r = n - 1, idx = -1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (starts[mid].first >= target) {
                    idx = starts[mid].second;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            result[i] = idx;
        }

        return result;
    }
};
