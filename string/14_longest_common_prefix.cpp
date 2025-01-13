class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (auto s: strs) {
            int len = min(ans.length(), s.length());
            string temp = "";
            
            for (int i = 0; i < len; i++) {
                if (ans[i] == s[i]) {
                    temp += s[i];
                } else {
                    break;
                }
            }

            ans = temp;
        }

        return ans;
    }
};