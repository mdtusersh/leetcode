class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        const size_t len = nums.size();

        vector<int> left(len, 0);
        vector<int> right(len, 0);
        vector<int> ans(len, 0);

        for (int i = 1; i < len; i++) {
            left[i] = left[i - 1] + nums[i - 1];
        }

        for (int i = len - 2; i >= 0; i--) {
            right[i] = right[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < len; i++) {
            ans[i] = abs(left[i] - right[i]);
        }

        return ans;
    }
};