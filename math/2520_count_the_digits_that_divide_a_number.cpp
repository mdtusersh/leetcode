class Solution {
public:
    int countDigits(int num) {
        int ans{0};
        int temp{num};

        while (temp) {
            int last = temp % 10;

            if (num % last == 0) {
                ans++;
            }

            temp /= 10;
        }

        return ans;
    }
};