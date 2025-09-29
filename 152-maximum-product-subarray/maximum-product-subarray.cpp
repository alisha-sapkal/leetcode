class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0], minProd = nums[0], ans = nums[0];
        for (int i=1; i<nums.size(); i++) {
            int curr = maxProd;
            maxProd = max({nums[i], nums[i]*curr, minProd*nums[i]});
            minProd = min({nums[i], nums[i]*curr, minProd*nums[i]});
            ans = max(maxProd, ans);
        }
        return ans;
    }
};