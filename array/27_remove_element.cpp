class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for (auto n: nums) {
            if (n != val) {
                ans.push_back(n);
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        return ans.size();
    }
};