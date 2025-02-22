class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
 
        std::vector<int> x_coords;
        for (const auto& point : points) {
            x_coords.push_back(point[0]);
        }
        std::sort(x_coords.begin(), x_coords.end());

        int max_gap = 0;
        for (int i = 1; i < x_coords.size(); ++i) {
            max_gap = std::max(max_gap, x_coords[i] - x_coords[i - 1]);
        }
        return max_gap;
    }
};