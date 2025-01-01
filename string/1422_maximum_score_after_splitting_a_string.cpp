class Solution {
public:
    int maxScore(string s) {
        int ans = 0;

        for (int i = 1; i < s.size(); i++) {
            int left = 0, right = 0;

            for (int j = 0; j < i; j++) {
                if (s[j] == '0') {
                    left++;
                }
            }

            for (int j = i; j < s.size(); j++) {
                if (s[j] == '1') {
                    right++;
                }
            }

            ans = max(ans, left + right);
        }

        return ans;
    }
};