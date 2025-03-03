class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0, minSum = 0, currMax = 0, currMin = 0;
        for (int num : nums) {
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);
        }
        return max(abs(maxSum), abs(minSum));
    }
};
