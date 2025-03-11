class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int word = 0;
        
        for (auto c : s) {
            if (c == ' ') {
                word++;
            }

            if (word == k) {
                return ans;
            }

            ans += c;
        }

        return ans;
    }
};