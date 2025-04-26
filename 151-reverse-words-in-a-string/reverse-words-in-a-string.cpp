class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str = "";
        for (char ch : s) {
            if (ch == ' ') {
                if (!str.empty()) {
                    v.push_back(str);
                    str = "";
                }
            } else {
                str += ch;
            }
        }
        if (!str.empty()) {
            v.push_back(str);
        }

        string ans = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            ans += v[i];
            if (i != 0) ans += " ";
        }
        return ans;
    }
};
