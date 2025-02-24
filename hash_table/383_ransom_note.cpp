class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for (char ch : magazine) {
            if (map.contains(ch)) {
                map[ch] += 1;
            } else {
                map[ch] = 1;
            }
        }

        for (char ch : ransomNote) {
            if (map.count(ch) && map[ch] > 0) {
                map[ch] -= 1;
            } else {
                return false;
            }
        }

        return true;
    }
};