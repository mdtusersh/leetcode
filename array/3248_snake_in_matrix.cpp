class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> grid(n, vector<int>(n));

        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = k++;
            }
        }

        int i = 0, j = 0;

        for (auto c : commands) {
            if (c == "UP") {
                i--;
            } else if (c == "DOWN") {
                i++;
            } else if (c == "LEFT") {
                j--;
            } else if (c == "RIGHT") {
                j++;
            }
        }

        return grid[i][j];
    }
};