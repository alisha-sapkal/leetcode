class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        if (modulo == 0) return 0;

        // int cnt = 0;
        // for (int l=0; l<nums.size(); l++) {
        //     int c = 0;
        //     for (int r=l; r<nums.size(); r++) {
        //         if (nums[r] % modulo == k) c++;
        //         if (c % modulo == k) cnt++;
        //     }
        // }
        // return  cnt;

        int pref = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        long long res = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % modulo == k) pref++;
            int need = (pref - k + modulo) % modulo;
            res += mp[need];
            mp[pref % modulo]++;
        }
        return res;
    }
};