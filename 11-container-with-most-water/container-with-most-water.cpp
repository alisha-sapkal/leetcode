class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i=0, j=height.size()-1;
        while (i < j) {
            int currArea = abs(i-j) * min(height[i], height[j]);
            maxArea = max(currArea, maxArea);
            if (height[i] > height[j]) j--;
            else i++;
        }
        return maxArea;
    }
};