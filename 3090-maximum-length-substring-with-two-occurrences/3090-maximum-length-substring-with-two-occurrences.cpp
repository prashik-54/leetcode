class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        int i = 0;
        int j = 0;
        int len = 0;
        while (j < n) {
            char curr = s[j];
            freq[curr]++;
            while (freq[curr] > 2) {
                freq[s[i]]--;
                i++;
            }

            len = max(len, j - i + 1);

            j++;
        }
        return len;
    }
};