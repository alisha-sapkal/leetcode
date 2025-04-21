class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size(), l = 0, r = cols - 1;
        while (l < rows && r > -1) {
            int n = matrix[l][r];
            if (n == target) return true;
            else if (n < target) l++;
            else r--;
        }
        return false;
    }
};