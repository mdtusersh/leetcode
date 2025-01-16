class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size() - 1; i++) {
            bool found = false;
            
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]){
                    found = true;
                    break;
                }
            }
            
            if(found) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};