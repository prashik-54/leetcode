class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        
        // Pad the string with '1' at both ends to easily handle boundary conditions
        s = '1' + s + '1';
        n = n + 2;
        
        vector<int> zerocount; // Stores the lengths of consecutive blocks of '0's
        int count = 0;         // Tracks the current consecutive '0' count
        
        // Count and record the size of each continuous block of zeros
        for (int i = 1; i < n; i++) {
            if (s[i] == '0') {
                count++;
            } else {
                // If we hit a '1' and have a pending zero count, store it
                if (count != 0) {
                    zerocount.push_back(count);
                    count = 0; // Reset count for the next block
                }
            }
        }
        
        int maxzero = 0;
        // Find the maximum sum of two adjacent blocks of zeros
        if (zerocount.size() > 1) {
            for (int i = 0; i < zerocount.size() - 1; i++) {
                int temp = zerocount[i] + zerocount[i + 1];
                maxzero = max(maxzero, temp);
            }
        }
        
        // Initialize answer with the best combined zero blocks found
        int ans = maxzero;
        
        // Add the total number of original '1's in the modified string 
        // (excluding the padded '1's at the boundaries)
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '1') {
                ans++;
            }
        }
        
        return ans;
    }
};
