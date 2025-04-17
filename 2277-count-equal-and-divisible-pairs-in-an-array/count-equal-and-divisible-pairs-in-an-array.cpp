class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        //brute force
        int cnt = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i; j<nums.size(); j++) {
                if (nums[i] == nums[j] && i*j % k == 0 && i<j) cnt++;
            }
        }
        return cnt;
    }
};