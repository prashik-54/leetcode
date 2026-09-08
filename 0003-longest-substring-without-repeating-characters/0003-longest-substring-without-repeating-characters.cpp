class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0) return 0;
        unordered_map<char,int>mp;
        int i =0;
        int j =0;
        int count = 0;
        int maxlen = 0;
        while(i<n && j<n){
            char curr = s[j];
            mp[curr]++;
            while(mp[curr]>1){
                mp[s[i]]--;
                i++;
            }
            int count = j-i+1;
            maxlen = max(count, maxlen);
            j++;
        }
        return maxlen;

    }
};