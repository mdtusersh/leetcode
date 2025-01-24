class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        bool ans = false;

        string prefix;
        for (string word : words) {
            prefix += word;
            if (prefix.size() > s.size()) {
                break;
            }

            if (s == prefix) {
                ans = true;
                break;
            }
        }

        return ans;
    }
};