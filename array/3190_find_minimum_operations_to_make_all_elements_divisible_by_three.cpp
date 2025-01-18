class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        
        for(int n: nums) {
            ans += n % 3 ? 1 : 0;
        }

        return ans;
    }
};