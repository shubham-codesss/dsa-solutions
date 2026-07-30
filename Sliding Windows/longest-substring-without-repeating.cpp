class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high = 0;
        int low = 0;
        int res = 0;
        unordered_map<char, int> f;
        for (high = 0; high < s.size(); high++) {
            f[s[high]]++;
            int length = high - low + 1;
            while (f.size() < length) {
                f[s[low]]--;
                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
                length = high - low + 1;
            }
            length = high - low + 1;
            res = max(res, length);
        }
        return res;
    }
};
