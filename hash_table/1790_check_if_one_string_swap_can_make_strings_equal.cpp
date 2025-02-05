class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int dif = 0;
        int a = 0;
        int b = 0;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                dif++;

                if (dif == 1) {
                    a = i;
                } else if (dif == 2) {
                    b = i;
                }
            }
        }

        if (dif == 0 || dif == 2 && s1[a] == s2[b] && s1[b] == s2[a]) {
            return true;
        }

        return false;
    }
};