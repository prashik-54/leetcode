class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        s = '1' + s + '1';
        n = n + 2;
        vector<int> zerocount; // lagatar kitne zero honge
        int count = 0;         // lagatar zero ka count
        for (int i = 1; i < n; i++) {
            if (s[i] == '0')
                count++;
            else {
                if (count != 0) {
                    zerocount.push_back(count);
                    count = 0;
                }
            }
        }
        int maxzero = 0;
        if (zerocount.size() > 1) {
            for (int i = 0; i < zerocount.size() - 1; i++) {
                int temp = zerocount[i] + zerocount[i + 1];
                maxzero = max(maxzero, temp);
            }
        }
        int ans = maxzero;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '1')
                ans++;
        }
        return ans;
    }
};