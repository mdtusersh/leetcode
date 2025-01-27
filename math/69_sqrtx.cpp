class Solution {
public:
    int mySqrt(int x) {
        long long n = x;

        while(n * n > x) {
            n /= 2;
        }

        n = n * 2;

        while (true) {
            if (n * n <= x) {
                return n;
            }

            n--;
        }
    }
};