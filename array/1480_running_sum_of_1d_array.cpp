class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;

        for (auto n : nums) {
            sum += n;
            ans.push_back(sum);
        }

        return ans;
    }
};