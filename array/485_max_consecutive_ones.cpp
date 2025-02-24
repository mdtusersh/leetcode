class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int mx = 0;
        
        for(int n : nums) {
            if(n) {
                mx++;
            } else {
                ans = max(ans, mx);
                mx = 0;
            }
        }
        
        return max(ans, mx);
    }
};