class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string> ans;
        if (n <= 10)
            return ans;
        unordered_map<string, int> freq;
        string temp = s.substr(0, 10);
        freq[temp]++;
        for (int i = 1; i <= n - 10; i++) {
            temp = s.substr(i, 10);
            if (freq[temp] == 1) {
                ans.push_back(temp);
            }
            freq[temp]++;
        }
        return ans;
    }
};