class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int n : nums) {
            mp[n]++;
        }
        int mx = 0, ans;
        for (const auto& m : mp)  {
            if (m.second > mx) {
                mx = m.second;
                ans = m.first;
            }
        }
        return ans;
    }
};