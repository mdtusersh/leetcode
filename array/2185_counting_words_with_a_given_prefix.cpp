class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        
        for(auto w : words) {
            if(w.starts_with(pref)) {
                ans++;
            }
        }

        return ans;
    }
};