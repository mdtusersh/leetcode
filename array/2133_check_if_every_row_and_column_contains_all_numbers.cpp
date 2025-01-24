class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int len = matrix.size() + 1;
        for (auto m : matrix) {
            vector<bool> check(len, true);

            for (auto n : m) {
                check[n] = false;
            }

            for (int i = 1; i < len; i++) {
                if (check[i])
                    return false;
            }
        }

        for (int i = 0; i < len - 1; i++) {
            vector<bool> check(len, true);

            for (int j = 0; j < len - 1; j++) {
                check[matrix[j][i]] = false;
            }

            for (int k = 1; k < len; k++) {
                if (check[k])
                    return false;
            }
        }

        return true;
    }
};