class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curr = 0;
        int ans = 0;
        unordered_map<int, int>mp;
        mp[0] = 1;
        for (int i : nums) {
            curr += i;
            if (mp.find(curr - k) != mp.end()) ans += mp[curr - k];
            mp[curr]++;
        }
        return ans;
    }
};