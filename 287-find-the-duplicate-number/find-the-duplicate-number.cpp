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
        

        //optimized
        int ans = 0;
        vector<int> v(nums.size()+5, 0);
        for (int n : nums) {
            if (v[n] == 1) {
                ans = n;
                break;
            }
            v[n] = 1;
        }
        return ans;
    }
};