class Solution {
public:
    // bool isPalindrome(string s){
    //     for (int i=0, j=s.size()-1; i<s.size()/2 && j>=s.size()/2; i++, j--) {
    //         if (s[i] != s[j]) return false;
    //     }
    //     return true;
    // }

    string longestPalindrome(string s) {
        // string ans = "";
        // int maxLen = 0;
        // for (int i=0; i<s.size(); i++) {
        //     for (int j=i; j<s.size(); j++) {
        //         if (s[i] == s[j]) {
        //             string str = s.substr(i, j-i+1);
        //             int len = str.size();
        //             if (isPalindrome(str) && maxLen < len) {
        //                 maxLen = len;
        //                 ans = str;
        //             }
        //         }
        //     }
        // }
        // return ans;

        if (s.empty()) return "";
        string t = "^#";
        for (char c : s) {
            t += c;
            t += '#';
        }
        t += '$';
        int n = t.size();
        vector<int> P(n, 0);
        int center = 0, right = 0;
        int maxLen = 0, centerIndex = 0;
        for (int i = 1; i < n - 1; ++i) {
            int mirror = 2 * center - i;
            if (i < right)  P[i] = min(right - i, P[mirror]);
            while (t[i + (1 + P[i])] == t[i - (1 + P[i])]) P[i]++;
            if (i + P[i] > right) {
                center = i;
                right = i + P[i];
            }
            if (P[i] > maxLen) {
                maxLen = P[i];
                centerIndex = i;
            }
        }
        int start = (centerIndex - maxLen) / 2;
        return s.substr(start, maxLen);
    }
};