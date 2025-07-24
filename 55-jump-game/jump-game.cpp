class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (find(nums.begin(), nums.end(), 0) == nums.end()) return true;
        int far = 0;
        for (int i=0; i<nums.size(); i++) {
            if (i > far) return false;
            far = max(far, i + nums[i]);
        }
        return true;
    }
};