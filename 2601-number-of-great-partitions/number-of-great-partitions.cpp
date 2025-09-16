#define ll long long
class Solution {
public:
    int mod = 1e9 + 7;
    ll dp[1001][1001];
    ll solve(vector<int>& nums, int k, int i, ll sum) {
        if (i == nums.size()) {
            if (sum < k) return 1;
            return 0;
        }
        if (dp[i][sum] != -1) {
            return dp[i][sum];
        }
        ll choice1 = 0, choice2 = 0;
        if (sum + nums[i]< k) {
            choice1 = solve(nums, k, i+1, sum+nums[i]);
        }
        choice2 = solve(nums,k, i+1, sum);
        return dp[i][sum] = (choice1 + choice2) % mod;
    }

    int countPartitions(vector<int>& nums, int k) {
        int totalSum = 0;
        for (auto n : nums) {
            totalSum = (totalSum+ n) % mod;
        }
        if (totalSum/2 < k) return 0;
        memset(dp, -1, sizeof(dp));
        ll wrongPart = solve(nums, k, 0, 0);
        ll totalSubset = 1;
        for (int i=0; i<nums.size(); i++) {
            totalSubset = (totalSubset*2) % mod;
        }
        ll res = totalSubset - 2*wrongPart;
        if (res<0) res += mod;
        return res % mod;
    }
};