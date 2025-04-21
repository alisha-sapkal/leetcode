class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int n : nums) {
            mp[n]++;
        }
        vector<int>v;
        for (const auto& m : mp)  {
            if (m.second > (nums.size())/3) v.push_back(m.first);
        }
        return v;
    }
};