class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;

        int l = 0, r = heights.size() - 1;

        for(int i = 0; i < heights.size(); i++) {
            int area = min(heights[l], heights[r]) * (r - l);

            res = max(area, res);

            if(heights[l] <= heights[r])
                l++;
            else
                r--;
        }

        return res;
    }
};
