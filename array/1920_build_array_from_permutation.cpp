class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.insert(ans.begin() + i, nums[nums[i]]);
        }

        return ans;
    }
};