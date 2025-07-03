class Solution {
public:
    string rec(string &s, int &k) {
        while (s.size() < k) {
            string ans = "";
            for (char c : s) {
                ans += char(c+1);
            }
            s += ans;
        }
        return s;
    }

    char kthCharacter(int k) {
        string first = "a";
        string ans = rec(first, k);
        return ans[k-1];
    }
};