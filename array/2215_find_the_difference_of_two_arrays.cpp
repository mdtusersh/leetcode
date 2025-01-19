class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        set<int> left;
        set<int> right;

        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(left, left.begin()));
        set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(right, right.begin()));

        vector<vector<int>> ans;

        ans.push_back(vector<int> (left.begin(), left.end()));
        ans.push_back(vector<int> (right.begin(), right.end()));

        return ans;
    }
};