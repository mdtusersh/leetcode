class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        bool found = false;
        
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(found) break;
                else continue;
            }
            else {
                found = true;
                ans++;
            }
        }

        return ans;
    }
};