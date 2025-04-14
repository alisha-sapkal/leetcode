class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //brute force 
        //sort(nums.begin(), nums.end());
        //for(int i=1; i<nums.size(); i++){
        //    if(nums[i] == nums[i-1]){
        //        return nums[i];
        //    }
        //}
        //return -1;
        unordered_map<int, int>mp;
        for (int n : nums) {
            mp[n]++;
        }
        for (const auto &m : mp) {
            if (m.second > 1) return m.first;
        }
        return -1;
    }
};