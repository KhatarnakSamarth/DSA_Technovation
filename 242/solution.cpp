class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> u, v;
        for (char e : s) {
            u[e]++;
        }
        for (char k : t) {
            v[k]++;
        }
        if (u == v) {
            return true;
        }
        return false;
    }
};