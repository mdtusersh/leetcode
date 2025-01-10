class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;

        for (auto o : operations) {
            if (o.contains("++")) {
                ans++;
            } else {
                ans--;
            }
        }

        return ans;
    }
};